#pragma once

class CBodyComponent : public CEntityComponent /*0x0*/  // sizeof 0x78, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CGameSceneNode* m_pSceneNode; // offset 0x8, size 0x8, align 8 | MNotSaved
    char _pad_0010[0x38]; // offset 0x10
    CNetworkVarChainer __m_pChainEntity; // offset 0x48, size 0x28, align 255 | MNotSaved
    char _pad_0070[0x8]; // offset 0x70
};
