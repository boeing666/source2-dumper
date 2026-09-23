#pragma once

class C_SpotlightEnd : public C_BaseModelEntity /*0x0*/  // sizeof 0x1030, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    float32 m_flLightScale; // offset 0x1020, size 0x4, align 4 | MNotSaved
    float32 m_Radius; // offset 0x1024, size 0x4, align 4 | MNotSaved
    char _pad_1028[0x8]; // offset 0x1028
};
