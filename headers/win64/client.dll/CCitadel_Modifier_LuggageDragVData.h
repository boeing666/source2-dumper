#pragma once

class CCitadel_Modifier_LuggageDragVData : public CCitadel_Modifier_DragVData /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8A8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StompIgnoreLingerModifier; // offset 0x8A8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flStompIgnoreLingerDuration; // offset 0x8B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_08BC[0x4]; // offset 0x8BC
};
