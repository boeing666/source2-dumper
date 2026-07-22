#pragma once

class CDOTALockpickingGameDefinition  // sizeof 0x1E0, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlVector< CDOTALockpickingStageDefinition > m_vecStages; // offset 0x0, size 0x18, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_successEffect; // offset 0x18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_failEffect; // offset 0xF8, size 0xE0, align 8
    int32 m_nScorePerUnlock; // offset 0x1D8, size 0x4, align 4
    char _pad_01DC[0x4]; // offset 0x1DC
};
