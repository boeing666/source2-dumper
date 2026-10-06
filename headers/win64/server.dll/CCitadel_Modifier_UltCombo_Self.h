#pragma once

class CCitadel_Modifier_UltCombo_Self : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    QAngle m_angles; // offset 0x148, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x154, size 0x4, align 4
};
