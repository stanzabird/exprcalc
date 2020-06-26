# exprcalc
Calculate algebraic expression in C++

## desired syntax:
```
 11+3/3 -> 12
 2*(1+1) -> 4
 4^2 -> 16
 etc..
```
We want predefined functions; sin() cos(), etc.
We want variables in a std::map<>.
example use from main.cc
```cpp
exprcalc::exprcalc_t calc("1+41");

  auto compile_result = calc.compile();
  
  if (compile_result.result != exprcalc::exprcalc_t::compile_result_t::ok) {
    std::cout << "Parse error\n";
    return 1;
  }

  std::cout << calc.eval(std::map<std::string,exprcalc::number_t>()) << std::endl;
```
