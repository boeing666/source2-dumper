#pragma once

class CToolsConfig  // sizeof 0x48, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CEngineToolInfo > m_EngineTools; // offset 0x0, size 0x18, align 8
    CUtlVector< CExternalToolInfo > m_ExternalTools; // offset 0x18, size 0x18, align 8
    CUtlVector< CUtlString > m_EngineModulesThatReferenceAssets; // offset 0x30, size 0x18, align 8
};
