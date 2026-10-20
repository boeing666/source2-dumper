#pragma once

class CCitadel_Modifier_Nurse_LeechTherapy_Target : public CCitadelModifier /*0x0*/  // sizeof 0x788, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    int32 m_nNumTicksRemaining; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x8]; // offset 0x144
    float32 m_flDamageDealt; // offset 0x14C, size 0x4, align 4
    float32 m_flStaminaDrained; // offset 0x150, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLeech; // offset 0x154, size 0x4, align 4
    char _pad_0158[0x630]; // offset 0x158
};
