#pragma once

class CDspPresetModifierList  // sizeof 0x20, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_dspName; // offset 0x0, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName
    CUtlVector< CDSPMixgroupModifier > m_modifiers; // offset 0x8, size 0x18, align 8 | MPropertyDescription MPropertyFriendlyName
};
