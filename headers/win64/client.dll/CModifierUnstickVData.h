#pragma once

class CModifierUnstickVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    CSoundEventName m_sSuccessSound; // offset 0x840, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_sFailureSound; // offset 0x850, size 0x10, align 8 | MPropertyGroupName
};
