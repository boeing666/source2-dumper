#pragma once

class CDOTAEventActionGrantAndClaimPair  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sEventActionGrant; // offset 0x0, size 0x8, align 8
    CUtlString m_sEventActionClaim; // offset 0x8, size 0x8, align 8
};
