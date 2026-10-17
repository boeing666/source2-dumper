#pragma once

class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff_Attack_Logic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    AttackRecord_t m_iRecord; // offset 0x1AAC, size 0x2, align 255
    char _pad_1AAE[0x2]; // offset 0x1AAE
    float32 m_flDamageScale; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
