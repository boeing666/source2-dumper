#pragma once

class CModifierUnstickVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CSoundEventName m_sSuccessSound; // offset 0x878, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_sFailureSound; // offset 0x888, size 0x10, align 8 | MPropertyGroupName
};
