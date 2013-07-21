// SEDNL - Copyright (c) 2013 Jeremy S. Cochoy
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from
// the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
//     1. The origin of this software must not be misrepresented; you must not
//        claim that you wrote the original software. If you use this software
//        in a product, an acknowledgment in the product documentation would
//        be appreciated but is not required.
//
//     2. Altered source versions must be plainly marked as such, and must not
//        be misrepresented as being the original software.
//
//     3. This notice may not be removed or altered from any source
//        distribution.

#ifndef PACKET_IPP_
#define PACKET_IPP_

namespace SedNL
{

inline
void Packet::swap(Packet& p) noexcept
{
    std::swap(m_data, p.m_data);
}

inline
void swap(Packet& a, Packet& b) noexcept
{
    a.swap(b);
}

} // namespace SedNL

namespace std
{
    template<>
    inline
    void swap(SedNL::Packet& lhs, SedNL::Packet& rhs) noexcept
    {
        SedNL::swap(lhs, rhs);
    }
}

#endif /* !PACKET_IPP_ */
