#pragma once

class CDestructiblePartsComponent  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CNetworkVarChainer __m_pChainEntity; // offset 0x0, size 0x28, align 255 | MNotSaved
    char _pad_0028[0x20]; // offset 0x28
    CUtlVector< uint16 > m_vecDamageTakenByHitGroup; // offset 0x48, size 0x18, align 8
    CHandle< C_BaseModelEntity > m_hOwner; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
    CAnimGraphControllerPtr m_pAnimGraphDestructibleGraphController; // offset 0x68, size 0x8, align 255
};
