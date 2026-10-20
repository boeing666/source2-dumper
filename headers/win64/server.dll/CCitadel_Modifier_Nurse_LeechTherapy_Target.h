#pragma once

class CCitadel_Modifier_Nurse_LeechTherapy_Target : public CCitadelModifier /*0x0*/  // sizeof 0x798, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_nNumTicksRemaining; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x8]; // offset 0x154
    float32 m_flDamageDealt; // offset 0x15C, size 0x4, align 4
    float32 m_flStaminaDrained; // offset 0x160, size 0x4, align 4
    CHandle< CBaseEntity > m_hLeech; // offset 0x164, size 0x4, align 4
    char _pad_0168[0x630]; // offset 0x168
};
