#pragma once

class CDOTA_Modifier_Spectre_SpectralDaggerInPath : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_movespeed; // offset 0x1AA8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTrackingTarget; // offset 0x1AAC, size 0x4, align 4
};
