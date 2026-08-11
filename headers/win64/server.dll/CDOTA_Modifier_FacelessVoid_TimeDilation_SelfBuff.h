#pragma once

class CDOTA_Modifier_FacelessVoid_TimeDilation_SelfBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    int32 slow; // offset 0x1A7C, size 0x4, align 4
};
