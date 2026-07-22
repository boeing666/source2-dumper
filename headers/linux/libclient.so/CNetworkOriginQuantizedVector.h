#pragma once

class CNetworkOriginQuantizedVector  // sizeof 0x28, align 0xFF [trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkedQuantizedFloat m_vecX; // offset 0x10, size 0x8, align 4
    CNetworkedQuantizedFloat m_vecY; // offset 0x18, size 0x8, align 4
    CNetworkedQuantizedFloat m_vecZ; // offset 0x20, size 0x8, align 4
};
