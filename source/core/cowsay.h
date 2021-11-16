#ifndef COWSAY_H
#define COWSAY_H

/*!
 *  The cowsay classes
 */

#include <iostream>
#include <string>
using std::string;
#include <optional>
using std::optional;


//=== Forward declarations
struct CLIOptions;

/// Class representing a text-based cow witha a personality!
class Cow{
    // TODO:
};

/// Class representing a billboard that stored and formats the text the cow says.
class BillBoard {
    // TODO:
};

/// This class keeps track of all the running option, which may be modified via CLI.
struct CLIOptions {
    //== Data members

    // [1]== Text related options
    // If the option below is present, the text displayed ignores
    // the default text width and keep any extra whitespaces present.
    std::optional<bool> ignore_wrap;   //!< Ignore textwidth and keep excessive whitespaces; Option -n 
    std::optional<size_t> text_width;   //!< Indicates the text width; default 40.
    std::optional<BillBoard::align_t> alignment; //!< The text's alignment option; default is left-aligned.
    std::optional<string> text;         //!< Text to display, coming from the CLI.

    // [2]== Cow related options
    std::optional<string> eyes;       //!< The eyes string; default is the basic eyes.
    std::optional<string> tongue;     //!< The tongue string; default is no tongue. Option -T
    std::optional<string> filename;   //!< The cow's filename; defalt is to read from stdin. Option -f. Default: empty
    std::optional<Cow::mood_t> mood;  //!< The cow's appearance; default is neutral.
    std::optional<bool> flip;

    //== Public interface
    CLIOptions( int argc, char **argv ){
        // Manual setting. TODO: read CLI to set these values.

        // eyes = "**";
        // tongue=" U";
        // ignore_wrap = true;
        mood = Cow::mood_t::NEUTRAL;
        flip = true;
        // alignment = BillBoard::align_t::CENTER;
        // alignment = BillBoard::align_t::LEFT;
        alignment = BillBoard::align_t::RIGHT;
    }

    inline bool has_text(void) const { return text.has_value(); }
};

#endif
