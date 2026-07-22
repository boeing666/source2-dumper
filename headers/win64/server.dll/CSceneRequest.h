#pragma once

class CSceneRequest  // sizeof 0x70, align 0xFF (server)
{
public:
    CUtlSymbolLarge m_szPayloadVDataName; // offset 0x0, size 0x8, align 8
    SceneRequestHandle_t m_uHandle; // offset 0x8, size 0x4, align 255
    ESceneRequestState_t m_state; // offset 0xC, size 0x4, align 4
    ENPCBehaviorOverride_t m_nNPCBehaviorOverride; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< SceneRequestTargetMapPair_t > m_vecActorMap; // offset 0x18, size 0x18, align 8
    CUtlVector< SceneRequestTargetMapPair_t > m_vecAnchorMap; // offset 0x30, size 0x18, align 8
    CHandle< CBaseEntity > m_hOwner; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    KeyValues3 m_nameMapKV3; // offset 0x50, size 0x10, align 8
    char _pad_0060[0x10]; // offset 0x60
};
