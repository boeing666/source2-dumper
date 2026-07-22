#pragma once

class CNetworkVelocityVector  // sizeof 0x28, align 0xFF [trivial_dtor] (client) {MNetworkVarsAtomic}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkedQuantizedFloat m_vecX; // offset 0x10, size 0x8, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback
    CNetworkedQuantizedFloat m_vecY; // offset 0x18, size 0x8, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback
    CNetworkedQuantizedFloat m_vecZ; // offset 0x20, size 0x8, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback
};
