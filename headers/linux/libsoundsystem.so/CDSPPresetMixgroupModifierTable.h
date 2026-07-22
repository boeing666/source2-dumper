#pragma once

class CDSPPresetMixgroupModifierTable  // sizeof 0x18, align 0x8 (soundsystem) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType}
{
public:
    CUtlVector< CDspPresetModifierList > m_table; // offset 0x0, size 0x18, align 8 | MPropertyDescription MPropertyFriendlyName
};
