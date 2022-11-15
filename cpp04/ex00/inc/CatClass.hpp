/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:28 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 20:51:09 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_H
# define CATCLASS_H

class CatClass
{
	public:
	
		CatClass(void);
		CatClass(CatClass const &src);
		~CatClass(void);
		CatClass &operator=(CatClass const &src);
};

#endif