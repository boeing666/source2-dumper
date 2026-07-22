#pragma once

class CCitadel_Modifier_ItemPunchable_GoldVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    float32 m_flPhysicsRadius; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CSoundEventName m_sHitSound; // offset 0x7B0, size 0x10, align 8 | MPropertyGroupName
};
