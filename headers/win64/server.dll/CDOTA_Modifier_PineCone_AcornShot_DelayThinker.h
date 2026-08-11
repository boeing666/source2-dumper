#pragma once

class CDOTA_Modifier_PineCone_AcornShot_DelayThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 m_nSourceProjectileHandle; // offset 0x1A7C, size 0x4, align 4
};
