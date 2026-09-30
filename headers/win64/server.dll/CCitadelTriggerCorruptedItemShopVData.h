#pragma once

class CCitadelTriggerCorruptedItemShopVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_InShopModifier; // offset 0x28, size 0x10, align 8 | MPropertyStartGroup
    CitadelMusicMsgType m_nSpawnMusicState; // offset 0x38, size 0x4, align 4 | MPropertyGroupName
    char _pad_003C[0x4]; // offset 0x3C
};
