#pragma once

class CShmupGameDefinition  // sizeof 0xB8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    float32 m_flGameWidth; // offset 0x0, size 0x4, align 4
    float32 m_flGameHeight; // offset 0x4, size 0x4, align 4
    float32 m_flBossFightDuration; // offset 0x8, size 0x4, align 4
    int32 m_nComboBaseScore; // offset 0xC, size 0x4, align 4
    CShmupPlayerDefinition m_player; // offset 0x10, size 0x60, align 4
    CShmupBossDefinition m_boss; // offset 0x70, size 0x48, align 8
};
