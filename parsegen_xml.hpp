#ifndef OMEGA_H_XML_HPP
#define OMEGA_H_XML_HPP

#include "parsegen_language.hpp"

namespace parsegen {
namespace xml {

enum {
  PROD_DOC,
  PROD_TOPLEVEL,
  PROD_TOPLEVELS,
  PROD_TOPLEVEL_ELEMENT,
  PROD_TOPLEVEL_XMLDECL,
  PROD_ELEMENT_EMPTY,
  PROD_ELEMENT,
  PROD_XMLDECL,
  PROD_STAG,
  PROD_ETAG,
  PROD_EMPTY_TAG,
  PROD_CONTENT,
  PROD_NO_CONTENT_ITEMS,
  PROD_CONTENT_ITEMS,
  PROD_CONTENT_ELEMENT,
  PROD_CONTENT_REF,
  PROD_CONTENT_COMMENT,
  PROD_NO_CHARDATA,
  PROD_CHARDATA,
  PROD_TAGFILL,
  PROD_NO_ATTS,
  PROD_ATTS,
  PROD_ATT,
  PROD_EQ,
  PROD_ATTVALUE_D,
  PROD_ATTVALUE_S,
  PROD_NO_DQUOTS,
  PROD_DQUOTS,
  PROD_DQUOT_CHAR,
  PROD_DQUOT_REF,
  PROD_NO_SQUOTS,
  PROD_SQUOTS,
  PROD_SQUOT_CHAR,
  PROD_SQUOT_REF,
  PROD_NAME,
  PROD_NAME_FIRST_LETTER,
  PROD_NAME_FIRST_UNDER,
  PROD_NAME_FIRST_COLON,
  PROD_NO_NAME_CHARS,
  PROD_NAME_CHARS,
  PROD_NAME_LETTER,
  PROD_NAME_DIGIT,
  PROD_NAME_DOT,
  PROD_NAME_DASH,
  PROD_NAME_UNDER,
  PROD_NAME_COLON,
  PROD_NO_MISCS,
  PROD_MISCS,
  PROD_MISC_COMMENT,
  PROD_MISC_SPACE,
  PROD_COMMENT,
  PROD_NO_COMMENTED,
  PROD_COMMENTED,
  PROD_COMMENT_CHAR,
  PROD_COMMENT_DASH,
  PROD_ENT_REF,
  PROD_CHAR_REF,
  PROD_ONE_DIGIT,
  PROD_DIGITS,
  PROD_NO_SPACES,
  PROD_YES_SPACES,
  PROD_ONE_SPACE,
  PROD_SPACES,
  PROD_DQUOTED_COMMON,
  PROD_DQUOTED_SQUOT,
  PROD_DQUOTED_RSQUARE,
  PROD_DQUOTED_DASH,
  PROD_SQUOTED_CHAR,
  PROD_SQUOTED_DQUOT,
  PROD_SQUOTED_RSQUARE,
  PROD_SQUOTED_DASH,
  PROD_DATA_COMMON,
  PROD_DATA_SQUOT,
  PROD_DATA_DQUOT,
  PROD_DATA_DASH,
  PROD_COMMENT_COMMON,
  PROD_COMMENT_LANGLE,
  PROD_COMMENT_AMP,
  PROD_COMMENT_SQUOT,
  PROD_COMMENT_DQUOT,
  PROD_COMMENT_RSQUARE,
  PROD_COMMON_SPACE,
  PROD_COMMON_LETTER,
  PROD_COMMON_DIGIT,
  PROD_COMMON_EXCL,
  PROD_COMMON_POUND,
  PROD_COMMON_DOT,
  PROD_COMMON_SLASH,
  PROD_COMMON_COLON,
  PROD_COMMON_SEMICOLON,
  PROD_COMMON_RANGLE,
  PROD_COMMON_QUESTION,
  PROD_COMMON_EQUAL,
  PROD_COMMON_LSQUARE,
  PROD_COMMON_UNDER,
  PROD_COMMON_OTHER,
};

enum { NPRODS = PROD_COMMON_OTHER + 1 };

enum {
  TOK_SPACE,
  TOK_LETTER,
  TOK_DIGIT,
  TOK_EXCL,
  TOK_DQUOTE,
  TOK_SQUOTE,
  TOK_POUND,
  TOK_AMP,
  TOK_DASH,
  TOK_DOT,
  TOK_SLASH,
  TOK_COLON,
  TOK_SEMICOLON,
  TOK_LANGLE,
  TOK_RANGLE,
  TOK_QUESTION,
  TOK_EQUAL,
  TOK_LSQUARE,
  TOK_RSQUARE,
  TOK_UNDER,
  TOK_OTHER,
};

enum { NTOKS = TOK_OTHER + 1 };

language build_language();
languagePtr ask_language();

reader_tablesPtr ask_reader_tables();

}  // end namespace xml
}  // namespace parsegen

#endif
