#include <string>
using std::string;

#include "cowsay.h"


//== THESE ARE AUXILIARY FUNCTIONS.

//== THESE ARE THE METHODS.
Cow::Cow( const CLIOptions &opt ) {
        m_body =
            std::string{"             ^__^   $thoughts  \n"} + 
            std::string{"     _______/($eyes)  $thoughts\n"} +
            std::string{" /\\/(       /(__)             \n"} +
            std::string{"    | w---- | $tongue          \n"} +
            std::string{"    ||     ||                  \n"} ;
}

BillBoard::BillBoard( const CLIOptions &opt ) {
    // TODO
    // [3] Get the text width provided by the user, if there is any
    m_width = opt.text_width ? opt.text_width.value() : 40;
    // [5] Check whether we need to flip the cow; in this case we need to pad the billboard to align with the cow's mouth
    m_flip = opt.flip ? true : false ;
}

void BillBoard::append_line( const std::string &line ) {
    // TODO

}

/// Formats the billboard based on the parameters set by the CLI or default values.
void BillBoard::format(void){
    // TODO
}

void BillBoard::show(void) const{
    // TODO
}

// ================================[ cowsay.cpp ]=====================================
