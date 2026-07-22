#pragma once

class CDOTACrateDropGameDef  // sizeof 0x5C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    Vector m_vGravity; // offset 0x0, size 0xC, align 4
    float32 m_flGameOverTime; // offset 0xC, size 0x4, align 4
    float32 m_flGameWonTime; // offset 0x10, size 0x4, align 4
    float32 m_flLevelWonTime; // offset 0x14, size 0x4, align 4
    float32 m_flLevelIntroTime; // offset 0x18, size 0x4, align 4
    float32 m_flSecondRowOffset; // offset 0x1C, size 0x4, align 4
    float32 m_flAbilityCooldown; // offset 0x20, size 0x4, align 4
    float32 m_flHeightVisualizationStep; // offset 0x24, size 0x4, align 4
    float32 m_flMultiplierStep; // offset 0x28, size 0x4, align 4
    float32 m_flMultiplierFactor; // offset 0x2C, size 0x4, align 4
    float32 m_flTutorialCrateSpawnInterval; // offset 0x30, size 0x4, align 4
    float32 m_flTutorialStepInvervalTime; // offset 0x34, size 0x4, align 4
    float32 m_flShieldDuration; // offset 0x38, size 0x4, align 4
    float32 m_flHurtDecayRate; // offset 0x3C, size 0x4, align 4
    float32 m_flGoopDuration; // offset 0x40, size 0x4, align 4
    float32 m_flGoopSlow; // offset 0x44, size 0x4, align 4
    int32 m_nRegenInstances; // offset 0x48, size 0x4, align 4
    float32 m_flRegenHealInterval; // offset 0x4C, size 0x4, align 4
    float32 m_flHeightBonusToastTime; // offset 0x50, size 0x4, align 4
    float32 m_flFallCrateVOChance; // offset 0x54, size 0x4, align 4
    float32 m_flHazardSpawnVOChance; // offset 0x58, size 0x4, align 4
};
