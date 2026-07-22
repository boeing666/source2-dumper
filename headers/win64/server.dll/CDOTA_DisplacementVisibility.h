#pragma once

class CDOTA_DisplacementVisibility : public CBaseEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    int32 m_HiddenDisplacement; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
};
