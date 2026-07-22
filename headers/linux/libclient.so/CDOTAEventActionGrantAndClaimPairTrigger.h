#pragma once

class CDOTAEventActionGrantAndClaimPairTrigger  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sMapClassToAdd; // offset 0x0, size 0x8, align 8
    CUtlVector< CDOTAEventActionGrantAndClaimPair > m_vecGrantAndClaimActionPairs; // offset 0x8, size 0x18, align 8
};
