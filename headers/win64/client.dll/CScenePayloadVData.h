#pragma once

class CScenePayloadVData  // sizeof 0xE8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType MVDataAssociatedFile}
{
public:
    ENPCBehaviorOverride_t m_eNPCBehavior; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoSceneResource > > m_sSceneFile; // offset 0x8, size 0xE0, align 8
};
