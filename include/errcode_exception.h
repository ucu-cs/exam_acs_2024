//
// Created by mykola on 22.04.24.
//

#ifndef COUNTWORDS_PAR_PROFTOOLS_ERRCODE_EXCEPTION_H
#define COUNTWORDS_PAR_PROFTOOLS_ERRCODE_EXCEPTION_H

#include <exception>
#include <string>

class errcode_exception: public std::exception {
private:
    int m_err_code;
    std::string m_message;

public:
    errcode_exception(int err_code, std::string_view msg): m_message(msg), m_err_code(err_code) {}

    [[nodiscard]] const char* what() const noexcept override;
    [[nodiscard]] int err_code() const noexcept;
};

#endif //COUNTWORDS_PAR_PROFTOOLS_ERRCODE_EXCEPTION_H
