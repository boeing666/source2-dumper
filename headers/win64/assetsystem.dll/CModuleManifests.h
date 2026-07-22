#pragma once

class CModuleManifests  // sizeof 0x18, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CManifestInfo > m_Manifests; // offset 0x0, size 0x18, align 8
};
