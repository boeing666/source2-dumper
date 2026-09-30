#pragma once

class C_SpotlightEnd : public C_BaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    float32 m_flLightScale; // offset 0xBB0, size 0x4, align 4 | MNotSaved
    float32 m_Radius; // offset 0xBB4, size 0x4, align 4 | MNotSaved
    char _pad_0BB8[0x8]; // offset 0xBB8
};
