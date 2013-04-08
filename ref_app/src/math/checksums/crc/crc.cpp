///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

/*
#include "crc.h"

// CRC-8-ATM (polynomial 0x07: x^8 + x^2 + x + 1)
template<>
const std::array<crc_8_atm_type::value_type, 256>
crc_8_atm_type::table
{{
  0x00U, 0x07U, 0x0EU, 0x09U, 0x1CU, 0x1BU, 0x12U, 0x15U,
  0x38U, 0x3FU, 0x36U, 0x31U, 0x24U, 0x23U, 0x2AU, 0x2DU,
  0x70U, 0x77U, 0x7EU, 0x79U, 0x6CU, 0x6BU, 0x62U, 0x65U,
  0x48U, 0x4FU, 0x46U, 0x41U, 0x54U, 0x53U, 0x5AU, 0x5DU,
  0xE0U, 0xE7U, 0xEEU, 0xE9U, 0xFCU, 0xFBU, 0xF2U, 0xF5U,
  0xD8U, 0xDFU, 0xD6U, 0xD1U, 0xC4U, 0xC3U, 0xCAU, 0xCDU,
  0x90U, 0x97U, 0x9EU, 0x99U, 0x8CU, 0x8BU, 0x82U, 0x85U,
  0xA8U, 0xAFU, 0xA6U, 0xA1U, 0xB4U, 0xB3U, 0xBAU, 0xBDU,
  0xC7U, 0xC0U, 0xC9U, 0xCEU, 0xDBU, 0xDCU, 0xD5U, 0xD2U,
  0xFFU, 0xF8U, 0xF1U, 0xF6U, 0xE3U, 0xE4U, 0xEDU, 0xEAU,
  0xB7U, 0xB0U, 0xB9U, 0xBEU, 0xABU, 0xACU, 0xA5U, 0xA2U,
  0x8FU, 0x88U, 0x81U, 0x86U, 0x93U, 0x94U, 0x9DU, 0x9AU,
  0x27U, 0x20U, 0x29U, 0x2EU, 0x3BU, 0x3CU, 0x35U, 0x32U,
  0x1FU, 0x18U, 0x11U, 0x16U, 0x03U, 0x04U, 0x0DU, 0x0AU,
  0x57U, 0x50U, 0x59U, 0x5EU, 0x4BU, 0x4CU, 0x45U, 0x42U,
  0x6FU, 0x68U, 0x61U, 0x66U, 0x73U, 0x74U, 0x7DU, 0x7AU,
  0x89U, 0x8EU, 0x87U, 0x80U, 0x95U, 0x92U, 0x9BU, 0x9CU,
  0xB1U, 0xB6U, 0xBFU, 0xB8U, 0xADU, 0xAAU, 0xA3U, 0xA4U,
  0xF9U, 0xFEU, 0xF7U, 0xF0U, 0xE5U, 0xE2U, 0xEBU, 0xECU,
  0xC1U, 0xC6U, 0xCFU, 0xC8U, 0xDDU, 0xDAU, 0xD3U, 0xD4U,
  0x69U, 0x6EU, 0x67U, 0x60U, 0x75U, 0x72U, 0x7BU, 0x7CU,
  0x51U, 0x56U, 0x5FU, 0x58U, 0x4DU, 0x4AU, 0x43U, 0x44U,
  0x19U, 0x1EU, 0x17U, 0x10U, 0x05U, 0x02U, 0x0BU, 0x0CU,
  0x21U, 0x26U, 0x2FU, 0x28U, 0x3DU, 0x3AU, 0x33U, 0x34U,
  0x4EU, 0x49U, 0x40U, 0x47U, 0x52U, 0x55U, 0x5CU, 0x5BU,
  0x76U, 0x71U, 0x78U, 0x7FU, 0x6AU, 0x6DU, 0x64U, 0x63U,
  0x3EU, 0x39U, 0x30U, 0x37U, 0x22U, 0x25U, 0x2CU, 0x2BU,
  0x06U, 0x01U, 0x08U, 0x0FU, 0x1AU, 0x1DU, 0x14U, 0x13U,
  0xAEU, 0xA9U, 0xA0U, 0xA7U, 0xB2U, 0xB5U, 0xBCU, 0xBBU,
  0x96U, 0x91U, 0x98U, 0x9FU, 0x8AU, 0x8DU, 0x84U, 0x83U,
  0xDEU, 0xD9U, 0xD0U, 0xD7U, 0xC2U, 0xC5U, 0xCCU, 0xCBU,
  0xE6U, 0xE1U, 0xE8U, 0xEFU, 0xFAU, 0xFDU, 0xF4U, 0xF3U
}};

// CRC-16 CCITT (polynomial 0x1021)
template<>
const std::array<crc_ccitt_type::value_type, 256>
crc_ccitt_type::table
{{
  0x0000U, 0x1021U, 0x2042U, 0x3063U,
  0x4084U, 0x50A5U, 0x60C6U, 0x70E7U,
  0x8108U, 0x9129U, 0xA14AU, 0xB16BU,
  0xC18CU, 0xD1ADU, 0xE1CEU, 0xF1EFU,
  0x1231U, 0x0210U, 0x3273U, 0x2252U,
  0x52B5U, 0x4294U, 0x72F7U, 0x62D6U,
  0x9339U, 0x8318U, 0xB37BU, 0xA35AU,
  0xD3BDU, 0xC39CU, 0xF3FFU, 0xE3DEU,
  0x2462U, 0x3443U, 0x0420U, 0x1401U,
  0x64E6U, 0x74C7U, 0x44A4U, 0x5485U,
  0xA56AU, 0xB54BU, 0x8528U, 0x9509U,
  0xE5EEU, 0xF5CFU, 0xC5ACU, 0xD58DU,
  0x3653U, 0x2672U, 0x1611U, 0x0630U,
  0x76D7U, 0x66F6U, 0x5695U, 0x46B4U,
  0xB75BU, 0xA77AU, 0x9719U, 0x8738U,
  0xF7DFU, 0xE7FEU, 0xD79DU, 0xC7BCU,
  0x48C4U, 0x58E5U, 0x6886U, 0x78A7U,
  0x0840U, 0x1861U, 0x2802U, 0x3823U,
  0xC9CCU, 0xD9EDU, 0xE98EU, 0xF9AFU,
  0x8948U, 0x9969U, 0xA90AU, 0xB92BU,
  0x5AF5U, 0x4AD4U, 0x7AB7U, 0x6A96U,
  0x1A71U, 0x0A50U, 0x3A33U, 0x2A12U,
  0xDBFDU, 0xCBDCU, 0xFBBFU, 0xEB9EU,
  0x9B79U, 0x8B58U, 0xBB3BU, 0xAB1AU,
  0x6CA6U, 0x7C87U, 0x4CE4U, 0x5CC5U,
  0x2C22U, 0x3C03U, 0x0C60U, 0x1C41U,
  0xEDAEU, 0xFD8FU, 0xCDECU, 0xDDCDU,
  0xAD2AU, 0xBD0BU, 0x8D68U, 0x9D49U,
  0x7E97U, 0x6EB6U, 0x5ED5U, 0x4EF4U,
  0x3E13U, 0x2E32U, 0x1E51U, 0x0E70U,
  0xFF9FU, 0xEFBEU, 0xDFDDU, 0xCFFCU,
  0xBF1BU, 0xAF3AU, 0x9F59U, 0x8F78U,
  0x9188U, 0x81A9U, 0xB1CAU, 0xA1EBU,
  0xD10CU, 0xC12DU, 0xF14EU, 0xE16FU,
  0x1080U, 0x00A1U, 0x30C2U, 0x20E3U,
  0x5004U, 0x4025U, 0x7046U, 0x6067U,
  0x83B9U, 0x9398U, 0xA3FBU, 0xB3DAU,
  0xC33DU, 0xD31CU, 0xE37FU, 0xF35EU,
  0x02B1U, 0x1290U, 0x22F3U, 0x32D2U,
  0x4235U, 0x5214U, 0x6277U, 0x7256U,
  0xB5EAU, 0xA5CBU, 0x95A8U, 0x8589U,
  0xF56EU, 0xE54FU, 0xD52CU, 0xC50DU,
  0x34E2U, 0x24C3U, 0x14A0U, 0x0481U,
  0x7466U, 0x6447U, 0x5424U, 0x4405U,
  0xA7DBU, 0xB7FAU, 0x8799U, 0x97B8U,
  0xE75FU, 0xF77EU, 0xC71DU, 0xD73CU,
  0x26D3U, 0x36F2U, 0x0691U, 0x16B0U,
  0x6657U, 0x7676U, 0x4615U, 0x5634U,
  0xD94CU, 0xC96DU, 0xF90EU, 0xE92FU,
  0x99C8U, 0x89E9U, 0xB98AU, 0xA9ABU,
  0x5844U, 0x4865U, 0x7806U, 0x6827U,
  0x18C0U, 0x08E1U, 0x3882U, 0x28A3U,
  0xCB7DU, 0xDB5CU, 0xEB3FU, 0xFB1EU,
  0x8BF9U, 0x9BD8U, 0xABBBU, 0xBB9AU,
  0x4A75U, 0x5A54U, 0x6A37U, 0x7A16U,
  0x0AF1U, 0x1AD0U, 0x2AB3U, 0x3A92U,
  0xFD2EU, 0xED0FU, 0xDD6CU, 0xCD4DU,
  0xBDAAU, 0xAD8BU, 0x9DE8U, 0x8DC9U,
  0x7C26U, 0x6C07U, 0x5C64U, 0x4C45U,
  0x3CA2U, 0x2C83U, 0x1CE0U, 0x0CC1U,
  0xEF1FU, 0xFF3EU, 0xCF5DU, 0xDF7CU,
  0xAF9BU, 0xBFBAU, 0x8FD9U, 0x9FF8U,
  0x6E17U, 0x7E36U, 0x4E55U, 0x5E74U,
  0x2E93U, 0x3EB2U, 0x0ED1U, 0x1EF0U
}};

// CRC32 IEEE 802.3 (Ethernet, PKZIP) (polynomial 0x04C11DB7)
template<>
const std::array<crc_32_type::value_type, 256>
crc_32_type::table
{{
  0x00000000UL, 0x77073096UL, 0xEE0E612CUL, 0x990951BAUL,
  0x076DC419UL, 0x706AF48FUL, 0xE963A535UL, 0x9E6495A3UL,
  0x0EDB8832UL, 0x79DCB8A4UL, 0xE0D5E91EUL, 0x97D2D988UL,
  0x09B64C2BUL, 0x7EB17CBDUL, 0xE7B82D07UL, 0x90BF1D91UL,
  0x1DB71064UL, 0x6AB020F2UL, 0xF3B97148UL, 0x84BE41DEUL,
  0x1ADAD47DUL, 0x6DDDE4EBUL, 0xF4D4B551UL, 0x83D385C7UL,
  0x136C9856UL, 0x646BA8C0UL, 0xFD62F97AUL, 0x8A65C9ECUL,
  0x14015C4FUL, 0x63066CD9UL, 0xFA0F3D63UL, 0x8D080DF5UL,
  0x3B6E20C8UL, 0x4C69105EUL, 0xD56041E4UL, 0xA2677172UL,
  0x3C03E4D1UL, 0x4B04D447UL, 0xD20D85FDUL, 0xA50AB56BUL,
  0x35B5A8FAUL, 0x42B2986CUL, 0xDBBBC9D6UL, 0xACBCF940UL,
  0x32D86CE3UL, 0x45DF5C75UL, 0xDCD60DCFUL, 0xABD13D59UL,
  0x26D930ACUL, 0x51DE003AUL, 0xC8D75180UL, 0xBFD06116UL,
  0x21B4F4B5UL, 0x56B3C423UL, 0xCFBA9599UL, 0xB8BDA50FUL,
  0x2802B89EUL, 0x5F058808UL, 0xC60CD9B2UL, 0xB10BE924UL,
  0x2F6F7C87UL, 0x58684C11UL, 0xC1611DABUL, 0xB6662D3DUL,
  0x76DC4190UL, 0x01DB7106UL, 0x98D220BCUL, 0xEFD5102AUL,
  0x71B18589UL, 0x06B6B51FUL, 0x9FBFE4A5UL, 0xE8B8D433UL,
  0x7807C9A2UL, 0x0F00F934UL, 0x9609A88EUL, 0xE10E9818UL,
  0x7F6A0DBBUL, 0x086D3D2DUL, 0x91646C97UL, 0xE6635C01UL,
  0x6B6B51F4UL, 0x1C6C6162UL, 0x856530D8UL, 0xF262004EUL,
  0x6C0695EDUL, 0x1B01A57BUL, 0x8208F4C1UL, 0xF50FC457UL,
  0x65B0D9C6UL, 0x12B7E950UL, 0x8BBEB8EAUL, 0xFCB9887CUL,
  0x62DD1DDFUL, 0x15DA2D49UL, 0x8CD37CF3UL, 0xFBD44C65UL,
  0x4DB26158UL, 0x3AB551CEUL, 0xA3BC0074UL, 0xD4BB30E2UL,
  0x4ADFA541UL, 0x3DD895D7UL, 0xA4D1C46DUL, 0xD3D6F4FBUL,
  0x4369E96AUL, 0x346ED9FCUL, 0xAD678846UL, 0xDA60B8D0UL,
  0x44042D73UL, 0x33031DE5UL, 0xAA0A4C5FUL, 0xDD0D7CC9UL,
  0x5005713CUL, 0x270241AAUL, 0xBE0B1010UL, 0xC90C2086UL,
  0x5768B525UL, 0x206F85B3UL, 0xB966D409UL, 0xCE61E49FUL,
  0x5EDEF90EUL, 0x29D9C998UL, 0xB0D09822UL, 0xC7D7A8B4UL,
  0x59B33D17UL, 0x2EB40D81UL, 0xB7BD5C3BUL, 0xC0BA6CADUL,
  0xEDB88320UL, 0x9ABFB3B6UL, 0x03B6E20CUL, 0x74B1D29AUL,
  0xEAD54739UL, 0x9DD277AFUL, 0x04DB2615UL, 0x73DC1683UL,
  0xE3630B12UL, 0x94643B84UL, 0x0D6D6A3EUL, 0x7A6A5AA8UL,
  0xE40ECF0BUL, 0x9309FF9DUL, 0x0A00AE27UL, 0x7D079EB1UL,
  0xF00F9344UL, 0x8708A3D2UL, 0x1E01F268UL, 0x6906C2FEUL,
  0xF762575DUL, 0x806567CBUL, 0x196C3671UL, 0x6E6B06E7UL,
  0xFED41B76UL, 0x89D32BE0UL, 0x10DA7A5AUL, 0x67DD4ACCUL,
  0xF9B9DF6FUL, 0x8EBEEFF9UL, 0x17B7BE43UL, 0x60B08ED5UL,
  0xD6D6A3E8UL, 0xA1D1937EUL, 0x38D8C2C4UL, 0x4FDFF252UL,
  0xD1BB67F1UL, 0xA6BC5767UL, 0x3FB506DDUL, 0x48B2364BUL,
  0xD80D2BDAUL, 0xAF0A1B4CUL, 0x36034AF6UL, 0x41047A60UL,
  0xDF60EFC3UL, 0xA867DF55UL, 0x316E8EEFUL, 0x4669BE79UL,
  0xCB61B38CUL, 0xBC66831AUL, 0x256FD2A0UL, 0x5268E236UL,
  0xCC0C7795UL, 0xBB0B4703UL, 0x220216B9UL, 0x5505262FUL,
  0xC5BA3BBEUL, 0xB2BD0B28UL, 0x2BB45A92UL, 0x5CB36A04UL,
  0xC2D7FFA7UL, 0xB5D0CF31UL, 0x2CD99E8BUL, 0x5BDEAE1DUL,
  0x9B64C2B0UL, 0xEC63F226UL, 0x756AA39CUL, 0x026D930AUL,
  0x9C0906A9UL, 0xEB0E363FUL, 0x72076785UL, 0x05005713UL,
  0x95BF4A82UL, 0xE2B87A14UL, 0x7BB12BAEUL, 0x0CB61B38UL,
  0x92D28E9BUL, 0xE5D5BE0DUL, 0x7CDCEFB7UL, 0x0BDBDF21UL,
  0x86D3D2D4UL, 0xF1D4E242UL, 0x68DDB3F8UL, 0x1FDA836EUL,
  0x81BE16CDUL, 0xF6B9265BUL, 0x6FB077E1UL, 0x18B74777UL,
  0x88085AE6UL, 0xFF0F6A70UL, 0x66063BCAUL, 0x11010B5CUL,
  0x8F659EFFUL, 0xF862AE69UL, 0x616BFFD3UL, 0x166CCF45UL,
  0xA00AE278UL, 0xD70DD2EEUL, 0x4E048354UL, 0x3903B3C2UL,
  0xA7672661UL, 0xD06016F7UL, 0x4969474DUL, 0x3E6E77DBUL,
  0xAED16A4AUL, 0xD9D65ADCUL, 0x40DF0B66UL, 0x37D83BF0UL,
  0xA9BCAE53UL, 0xDEBB9EC5UL, 0x47B2CF7FUL, 0x30B5FFE9UL,
  0xBDBDF21CUL, 0xCABAC28AUL, 0x53B39330UL, 0x24B4A3A6UL,
  0xBAD03605UL, 0xCDD70693UL, 0x54DE5729UL, 0x23D967BFUL,
  0xB3667A2EUL, 0xC4614AB8UL, 0x5D681B02UL, 0x2A6F2B94UL,
  0xB40BBE37UL, 0xC30C8EA1UL, 0x5A05DF1BUL, 0x2D02EF8DUL
}};

// CRC64 ECMA 182 (polynomial 0x42F0E1EBA9EA3693)
template<>
const std::array<crc_64_ecma182_type::value_type, 256>
crc_64_ecma182_type::table
{{
  0x0000000000000000ULL, 0x42F0E1EBA9EA3693ULL,
  0x85E1C3D753D46D26ULL, 0xC711223CFA3E5BB5ULL,
  0x493366450E42ECDFULL, 0x0BC387AEA7A8DA4CULL,
  0xCCD2A5925D9681F9ULL, 0x8E224479F47CB76AULL,
  0x9266CC8A1C85D9BEULL, 0xD0962D61B56FEF2DULL,
  0x17870F5D4F51B498ULL, 0x5577EEB6E6BB820BULL,
  0xDB55AACF12C73561ULL, 0x99A54B24BB2D03F2ULL,
  0x5EB4691841135847ULL, 0x1C4488F3E8F96ED4ULL,
  0x663D78FF90E185EFULL, 0x24CD9914390BB37CULL,
  0xE3DCBB28C335E8C9ULL, 0xA12C5AC36ADFDE5AULL,
  0x2F0E1EBA9EA36930ULL, 0x6DFEFF5137495FA3ULL,
  0xAAEFDD6DCD770416ULL, 0xE81F3C86649D3285ULL,
  0xF45BB4758C645C51ULL, 0xB6AB559E258E6AC2ULL,
  0x71BA77A2DFB03177ULL, 0x334A9649765A07E4ULL,
  0xBD68D2308226B08EULL, 0xFF9833DB2BCC861DULL,
  0x388911E7D1F2DDA8ULL, 0x7A79F00C7818EB3BULL,
  0xCC7AF1FF21C30BDEULL, 0x8E8A101488293D4DULL,
  0x499B3228721766F8ULL, 0x0B6BD3C3DBFD506BULL,
  0x854997BA2F81E701ULL, 0xC7B97651866BD192ULL,
  0x00A8546D7C558A27ULL, 0x4258B586D5BFBCB4ULL,
  0x5E1C3D753D46D260ULL, 0x1CECDC9E94ACE4F3ULL,
  0xDBFDFEA26E92BF46ULL, 0x990D1F49C77889D5ULL,
  0x172F5B3033043EBFULL, 0x55DFBADB9AEE082CULL,
  0x92CE98E760D05399ULL, 0xD03E790CC93A650AULL,
  0xAA478900B1228E31ULL, 0xE8B768EB18C8B8A2ULL,
  0x2FA64AD7E2F6E317ULL, 0x6D56AB3C4B1CD584ULL,
  0xE374EF45BF6062EEULL, 0xA1840EAE168A547DULL,
  0x66952C92ECB40FC8ULL, 0x2465CD79455E395BULL,
  0x3821458AADA7578FULL, 0x7AD1A461044D611CULL,
  0xBDC0865DFE733AA9ULL, 0xFF3067B657990C3AULL,
  0x711223CFA3E5BB50ULL, 0x33E2C2240A0F8DC3ULL,
  0xF4F3E018F031D676ULL, 0xB60301F359DBE0E5ULL,
  0xDA050215EA6C212FULL, 0x98F5E3FE438617BCULL,
  0x5FE4C1C2B9B84C09ULL, 0x1D14202910527A9AULL,
  0x93366450E42ECDF0ULL, 0xD1C685BB4DC4FB63ULL,
  0x16D7A787B7FAA0D6ULL, 0x5427466C1E109645ULL,
  0x4863CE9FF6E9F891ULL, 0x0A932F745F03CE02ULL,
  0xCD820D48A53D95B7ULL, 0x8F72ECA30CD7A324ULL,
  0x0150A8DAF8AB144EULL, 0x43A04931514122DDULL,
  0x84B16B0DAB7F7968ULL, 0xC6418AE602954FFBULL,
  0xBC387AEA7A8DA4C0ULL, 0xFEC89B01D3679253ULL,
  0x39D9B93D2959C9E6ULL, 0x7B2958D680B3FF75ULL,
  0xF50B1CAF74CF481FULL, 0xB7FBFD44DD257E8CULL,
  0x70EADF78271B2539ULL, 0x321A3E938EF113AAULL,
  0x2E5EB66066087D7EULL, 0x6CAE578BCFE24BEDULL,
  0xABBF75B735DC1058ULL, 0xE94F945C9C3626CBULL,
  0x676DD025684A91A1ULL, 0x259D31CEC1A0A732ULL,
  0xE28C13F23B9EFC87ULL, 0xA07CF2199274CA14ULL,
  0x167FF3EACBAF2AF1ULL, 0x548F120162451C62ULL,
  0x939E303D987B47D7ULL, 0xD16ED1D631917144ULL,
  0x5F4C95AFC5EDC62EULL, 0x1DBC74446C07F0BDULL,
  0xDAAD56789639AB08ULL, 0x985DB7933FD39D9BULL,
  0x84193F60D72AF34FULL, 0xC6E9DE8B7EC0C5DCULL,
  0x01F8FCB784FE9E69ULL, 0x43081D5C2D14A8FAULL,
  0xCD2A5925D9681F90ULL, 0x8FDAB8CE70822903ULL,
  0x48CB9AF28ABC72B6ULL, 0x0A3B7B1923564425ULL,
  0x70428B155B4EAF1EULL, 0x32B26AFEF2A4998DULL,
  0xF5A348C2089AC238ULL, 0xB753A929A170F4ABULL,
  0x3971ED50550C43C1ULL, 0x7B810CBBFCE67552ULL,
  0xBC902E8706D82EE7ULL, 0xFE60CF6CAF321874ULL,
  0xE224479F47CB76A0ULL, 0xA0D4A674EE214033ULL,
  0x67C58448141F1B86ULL, 0x253565A3BDF52D15ULL,
  0xAB1721DA49899A7FULL, 0xE9E7C031E063ACECULL,
  0x2EF6E20D1A5DF759ULL, 0x6C0603E6B3B7C1CAULL,
  0xF6FAE5C07D3274CDULL, 0xB40A042BD4D8425EULL,
  0x731B26172EE619EBULL, 0x31EBC7FC870C2F78ULL,
  0xBFC9838573709812ULL, 0xFD39626EDA9AAE81ULL,
  0x3A28405220A4F534ULL, 0x78D8A1B9894EC3A7ULL,
  0x649C294A61B7AD73ULL, 0x266CC8A1C85D9BE0ULL,
  0xE17DEA9D3263C055ULL, 0xA38D0B769B89F6C6ULL,
  0x2DAF4F0F6FF541ACULL, 0x6F5FAEE4C61F773FULL,
  0xA84E8CD83C212C8AULL, 0xEABE6D3395CB1A19ULL,
  0x90C79D3FEDD3F122ULL, 0xD2377CD44439C7B1ULL,
  0x15265EE8BE079C04ULL, 0x57D6BF0317EDAA97ULL,
  0xD9F4FB7AE3911DFDULL, 0x9B041A914A7B2B6EULL,
  0x5C1538ADB04570DBULL, 0x1EE5D94619AF4648ULL,
  0x02A151B5F156289CULL, 0x4051B05E58BC1E0FULL,
  0x87409262A28245BAULL, 0xC5B073890B687329ULL,
  0x4B9237F0FF14C443ULL, 0x0962D61B56FEF2D0ULL,
  0xCE73F427ACC0A965ULL, 0x8C8315CC052A9FF6ULL,
  0x3A80143F5CF17F13ULL, 0x7870F5D4F51B4980ULL,
  0xBF61D7E80F251235ULL, 0xFD913603A6CF24A6ULL,
  0x73B3727A52B393CCULL, 0x31439391FB59A55FULL,
  0xF652B1AD0167FEEAULL, 0xB4A25046A88DC879ULL,
  0xA8E6D8B54074A6ADULL, 0xEA16395EE99E903EULL,
  0x2D071B6213A0CB8BULL, 0x6FF7FA89BA4AFD18ULL,
  0xE1D5BEF04E364A72ULL, 0xA3255F1BE7DC7CE1ULL,
  0x64347D271DE22754ULL, 0x26C49CCCB40811C7ULL,
  0x5CBD6CC0CC10FAFCULL, 0x1E4D8D2B65FACC6FULL,
  0xD95CAF179FC497DAULL, 0x9BAC4EFC362EA149ULL,
  0x158E0A85C2521623ULL, 0x577EEB6E6BB820B0ULL,
  0x906FC95291867B05ULL, 0xD29F28B9386C4D96ULL,
  0xCEDBA04AD0952342ULL, 0x8C2B41A1797F15D1ULL,
  0x4B3A639D83414E64ULL, 0x09CA82762AAB78F7ULL,
  0x87E8C60FDED7CF9DULL, 0xC51827E4773DF90EULL,
  0x020905D88D03A2BBULL, 0x40F9E43324E99428ULL,
  0x2CFFE7D5975E55E2ULL, 0x6E0F063E3EB46371ULL,
  0xA91E2402C48A38C4ULL, 0xEBEEC5E96D600E57ULL,
  0x65CC8190991CB93DULL, 0x273C607B30F68FAEULL,
  0xE02D4247CAC8D41BULL, 0xA2DDA3AC6322E288ULL,
  0xBE992B5F8BDB8C5CULL, 0xFC69CAB42231BACFULL,
  0x3B78E888D80FE17AULL, 0x7988096371E5D7E9ULL,
  0xF7AA4D1A85996083ULL, 0xB55AACF12C735610ULL,
  0x724B8ECDD64D0DA5ULL, 0x30BB6F267FA73B36ULL,
  0x4AC29F2A07BFD00DULL, 0x08327EC1AE55E69EULL,
  0xCF235CFD546BBD2BULL, 0x8DD3BD16FD818BB8ULL,
  0x03F1F96F09FD3CD2ULL, 0x41011884A0170A41ULL,
  0x86103AB85A2951F4ULL, 0xC4E0DB53F3C36767ULL,
  0xD8A453A01B3A09B3ULL, 0x9A54B24BB2D03F20ULL,
  0x5D45907748EE6495ULL, 0x1FB5719CE1045206ULL,
  0x919735E51578E56CULL, 0xD367D40EBC92D3FFULL,
  0x1476F63246AC884AULL, 0x568617D9EF46BED9ULL,
  0xE085162AB69D5E3CULL, 0xA275F7C11F7768AFULL,
  0x6564D5FDE549331AULL, 0x279434164CA30589ULL,
  0xA9B6706FB8DFB2E3ULL, 0xEB46918411358470ULL,
  0x2C57B3B8EB0BDFC5ULL, 0x6EA7525342E1E956ULL,
  0x72E3DAA0AA188782ULL, 0x30133B4B03F2B111ULL,
  0xF7021977F9CCEAA4ULL, 0xB5F2F89C5026DC37ULL,
  0x3BD0BCE5A45A6B5DULL, 0x79205D0E0DB05DCEULL,
  0xBE317F32F78E067BULL, 0xFCC19ED95E6430E8ULL,
  0x86B86ED5267CDBD3ULL, 0xC4488F3E8F96ED40ULL,
  0x0359AD0275A8B6F5ULL, 0x41A94CE9DC428066ULL,
  0xCF8B0890283E370CULL, 0x8D7BE97B81D4019FULL,
  0x4A6ACB477BEA5A2AULL, 0x089A2AACD2006CB9ULL,
  0x14DEA25F3AF9026DULL, 0x562E43B4931334FEULL,
  0x913F6188692D6F4BULL, 0xD3CF8063C0C759D8ULL,
  0x5DEDC41A34BBEEB2ULL, 0x1F1D25F19D51D821ULL,
  0xD80C07CD676F8394ULL, 0x9AFCE626CE85B507ULL
}};
*/
