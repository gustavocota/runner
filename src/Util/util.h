/*
 * util.h
 *
 *  Created on: Apr 18, 2019
 *      Author: chur
 */

#ifndef SRC_UTIL_UTIL_H_
#define SRC_UTIL_UTIL_H_

////////////////////// Credit to https://stackoverflow.com/questions/26902633/how-to-iterate-over-a-stdtuple-in-c-11/26902803#26902803
#include <tuple>
#include <utility>
#include <cstddef>
#include <iostream>

template<class F, class... Ts, std::size_t... Is>
void for_each_in_tuple(const std::tuple<Ts...> & tuple, F func, std::index_sequence<Is...>){
	using expander = int[];
	(void)expander { 0, ((void)func(std::get<Is>(tuple)), 0)... };
}

template<class F, class...Ts>
void for_each_in_tuple(const std::tuple<Ts...> & tuple, F func){
	for_each_in_tuple(tuple, func, std::make_index_sequence<sizeof...(Ts)>());
}

///This is how you use it
//		for_each_in_tuple(yourTuple, [](const auto &x) {
//			std::cout<<typeid(x).name()<< std::endl;
//		});
//////////////////////

#endif /* SRC_UTIL_UTIL_H_ */
