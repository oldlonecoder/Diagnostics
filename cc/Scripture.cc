#include <Scripture/Scripture.h>

Scripture::~Scripture()
{

}

rem::code Scripture::CreateBook(const std::string &_Bookname)
{
    sql::schema& s = _db.model();
    s.id()  = _Bookname;
    auto entry = sql::schema::table{"Entry"};
    auto section = sql::schema::table{"Section"};
    
    using field = sql::schema::table::field;
    
    entry += {"Type", field::integer, field::data};
    entry += {"Code", field::integer, field::data};
    entry += {"Location", field::text, field::data};
    entry += {"FunctionSig", field::text, field::data};
    entry += {"ShortText", field::text, field::data};
    entry += {"LongText", field::text, field::data};
    entry += {"SectionID", field::text, field::foreign|field::key};
    field& f = entry["SectionID"];
    f.set_foreign_info("SectionID","ID");
    
    
    return rem::code::implement;
}
