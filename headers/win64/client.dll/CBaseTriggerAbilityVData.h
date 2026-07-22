#pragma once

class CBaseTriggerAbilityVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CSubclassName< 4 > m_AbilityToTrigger; // offset 0x1818, size 0x10, align 8 | MPropertyDescription
    float32 m_flMinCancelTime; // offset 0x1828, size 0x4, align 4 | MPropertyDescription
    ECitadelHintFeature m_eHintFeatureToMarkUsedOnTrigger; // offset 0x182C, size 0x4, align 4 | MPropertyDescription
    bool bTriggerOnDeselect; // offset 0x1830, size 0x1, align 1 | MPropertyDescription
    char _pad_1831[0x7]; // offset 0x1831
};
