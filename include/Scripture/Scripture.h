#pragma once
#include <Scripture/Book/Book.h>
#include <vxio/db/sqlite/lite.h>


/**
 * @brief Handle the Book instance, structure and IO data control;
 * 
 * @author &copy;2022 Serge Lussier (lussier.serge@gmail.com); oldlonecoder
 * 
 */
class Scripture
{
    Book* _Book = nullptr; ///< auto& book = the_book["section-id"];
                           ///< book << << logger::debug(funcname)) << rem::code::implement << " blah!" << color::Yellow << " yellow !blah"
                           // << rem::code::begin << "blah" << rem::code::end;

    sql::lite _db;
    
public:
    Scripture() = default;
    ~Scripture();
    
    rem::code CreateBook(const std::string& _Bookname);
    
    //...

};
