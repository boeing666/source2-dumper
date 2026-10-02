#pragma once

class CCitadel_Modifier_ItemPunchable_GoldVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flPhysicsRadius; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
    CSoundEventName m_sHitSound; // offset 0x7F0, size 0x10, align 8 | MPropertyGroupName
};
