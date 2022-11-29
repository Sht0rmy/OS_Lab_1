/*
 *             Copyright Andrey Semashev 2018.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */
/*!
 * \file   show_window_abi.cpp
 * \author Andrey Semashev
 * \date   10.03.2018
 *
 * \brief  This file contains ABI test for show_window.hpp
 */

#include <boost/winapi/show_window.hpp>
#include <windows.h>
#include "abi_test_tools.hpp"

int main()
{
#if BOOST_WINAPI_PARTITION_DESKTOP

    BOOST_WINAPI_TEST_TYPE_SAME(HWND);

#if !defined(NOSHOWWINDOW)

    BOOST_WINAPI_TEST_CONSTANT(SW_HIDE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWNORMAL);
    BOOST_WINAPI_TEST_CONSTANT(SW_NORMAL);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWMINIMIZED);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWMAXIMIZED);
    BOOST_WINAPI_TEST_CONSTANT(SW_MAXIMIZE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWNOACTIVATE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOW);
    BOOST_WINAPI_TEST_CONSTANT(SW_MINIMIZE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWMINNOACTIVE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWNA);
    BOOST_WINAPI_TEST_CONSTANT(SW_RESTORE);
    BOOST_WINAPI_TEST_CONSTANT(SW_SHOWDEFAULT);
    BOOST_WINAPI_TEST_CONSTANT(SW_FORCEMINIMIZE);
    BOOST_WINAPI_TEST_CONSTANT(SW_MAX);
    BOOST_WINAPI_TEST_CONSTANT(HIDE_WINDOW);
    BOOST_WINAPI_TEST_CONSTANT(SHOW_OPENWINDOW);
    BOOST_WINAPI_TEST_CONSTANT(SHOW_ICONWINDOW);
    BOOST_WINAPI_TEST_CONSTANT(SHOW_FULLSCREEN);
    BOOST_WINAPI_TEST_CONSTANT(SHOW_OPENNOACTIVATE);
    BOOST_WINAPI_TEST_CONSTANT(SW_PARENTCLOSING);
    BOOST_WINAPI_TEST_CONSTANT(SW_OTHERZOOM);
    BOOST_WINAPI_TEST_CONSTANT(SW_PARENTOPENING);
    BOOST_WINAPI_TEST_CONSTANT(SW_OTHERUNZOOM);

#endif // !defined(NOSHOWWINDOW)

    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(ShowWindow);
    BOOST_WINAPI_TEST_FUNCTION_SIGNATURE(ShowWindowAsync);

#endif // BOOST_WINAPI_PARTITION_DESKTOP

    return boost::report_errors();
}
