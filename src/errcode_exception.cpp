//
// Created by mykola on 22.04.24.
//

#include "errcode_exception.h"

const char* errcode_exception::what() const noexcept {
    return m_message.c_str();
}

int errcode_exception::err_code() const noexcept {
    return m_err_code;
}
