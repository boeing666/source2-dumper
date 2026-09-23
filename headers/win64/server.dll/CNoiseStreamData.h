#pragma once

class CNoiseStreamData  // sizeof 0x50, align 0x8 (server) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType MVDataAssociatedFile MVDataPreviewWidget}
{
public:
    NoiseStreamDef_t m_Stream; // offset 0x0, size 0x50, align 8 | MPropertyDescription
};
