#ifndef INCLUDED_EXPRCALC_H
#define INCLUDED_EXPRCALC_H

#include <string>
#include <map>

namespace exprcalc {

  using number_t = int;

  struct exprcalc_t {
    struct compile_result_t {
      enum { ok } result;
    };

    exprcalc_t(const std::string& expr) {}
    compile_result_t compile() { return compile_result_t(); }
    number_t eval(const std::map<std::string,number_t>& variables) { return number_t(); }
  };
}



#endif /* INCLUDED_EXPRCALC_H */

