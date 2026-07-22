#pragma once

class CNetworkVarChainer  // sizeof 0x28, align 0xFF (entity2)
{
public:
    char _pad_0000[0x20]; // offset 0x0
    ChangeAccessorFieldPathIndex_t m_PathIndex; // offset 0x20, size 0x4, align 255
    char _pad_0024[0x4]; // offset 0x24
};
