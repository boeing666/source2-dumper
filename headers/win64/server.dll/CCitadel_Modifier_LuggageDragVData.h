#pragma once

class CCitadel_Modifier_LuggageDragVData : public CCitadel_Modifier_DragVData /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StompIgnoreLingerModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flStompIgnoreLingerDuration; // offset 0x880, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0884[0x4]; // offset 0x884
};
