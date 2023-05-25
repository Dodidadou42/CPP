/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <ael-khni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:06:01 by ael-khni          #+#    #+#             */
/*   Updated: 2022/07/19 15:10:10 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    
private:
    std::string _name;

public:
    Zombie( std::string name );
    ~Zombie();
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );

};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif // ZOMBIE_HPP