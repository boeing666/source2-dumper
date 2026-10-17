#pragma once

class CDOTA_Modifier_Stacking_Base : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_stacks; // offset 0x1AA8, size 0x4, align 4
    bool destroy_on_zero_stacks; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 sub_modifier_forced_duration; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlString m_szSubModifierName; // offset 0x1AB8, size 0x8, align 8
    KeyValues* m_pSubModifierKV; // offset 0x1AC0, size 0x8, align 8
};
