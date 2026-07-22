#pragma once

struct ManifestTestResource_t  // sizeof 0x10, align 0x8 (resourcesystem) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child; // offset 0x8, size 0x8, align 8 | MKV3TransferName
};
