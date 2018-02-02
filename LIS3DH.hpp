/*
 * name:        LIS3DH
 * description: MEMS digital output motion sensor ultra low-power high performance 3-axes 'nano' accelerometer
 * manuf:       ST Microelectronics
 * version:     Version 0.1
 * url:         http://www.st.com/resource/en/datasheet/lis3dh.pdf
 * date:        2018-01-26
 * author       https://chisl.io/
 * file:        LIS3DH.hpp
 */

/*                                                                                                       *
 *                                   THIS FILE IS AUTOMATICALLY CREATED                                  *
 *                                    D O     N O T     M O D I F Y  !                                   *
 *                                                                                                       */

#include <cinttypes>

/* Derive from class LIS3DH_Base and implement the read and write functions! */

/* LIS3DH: MEMS digital output motion sensor ultra low-power high performance 3-axes 'nano' accelerometer */
class LIS3DH_Base
{
public:
	/* Pure virtual functions that need to be implemented in derived class: */
	virtual uint8_t read8(uint16_t address, uint16_t n=8) = 0;  // 8 bit read
	virtual void write(uint16_t address, uint8_t value, uint16_t n=8) = 0;  // 8 bit write
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG STATUS_REG_AUX                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG STATUS_REG_AUX:
	 * 8.1
	 */
	struct STATUS_REG_AUX
	{
		static const uint16_t __address = 7;
		
		/* Bits OR321: */
		/* 1, 2 and 3-axis data overrun.  */
		struct OR321
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // a new set of data has overwritten the previous set
		};
		/* Bits OR3: */
		/* 3-axis data overrun.  */
		struct OR3
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // new data for the 3-axis has overwritten the previous data
		};
		/* Bits OR2: */
		/* 2-axis data overrun.  */
		struct OR2
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // new data for the 2-axis has overwritten the previous data
		};
		/* Bits OR1: */
		/* 1-axis data overrun.  */
		struct OR1
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // new data for the 1-axis has overwritten the previous data
		};
		/* Bits DA321: */
		/* 1, 2 and 3-axis new data available.  */
		struct DA321
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NO_DATA = 0b0; // a new set of data is not yet available
			static const uint8_t DATA_AVAILABLE = 0b1; // a new set of data is available
		};
		/* Bits DA3: */
		/* 3-axis new data available.  */
		struct DA3
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t NO_DATA = 0b0; // new data for the 3-axis is not yet available
			static const uint8_t DATA_AVAILABLE = 0b1; // new data for the 3-axis is available
		};
		/* Bits DA2: */
		/* 2 -axis new data available.  */
		struct DA2
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NO_DATA = 0b0; // new data for the 2-axis is not yet available
			static const uint8_t DATA_AVAILABLE = 0b1; // new data for the 2-axis is available
		};
		/* Bits DA1: */
		/* 1-axis new data available.  */
		struct DA1
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_DATA = 0b0; // new data for the 1-axis is not yet available
			static const uint8_t DATA_AVAILABLE = 0b1; // new data for the 1-axis is available
		};
	};
	
	/* Set register STATUS_REG_AUX */
	void setSTATUS_REG_AUX(uint8_t value)
	{
		write(STATUS_REG_AUX::__address, value, 8);
	}
	
	/* Get register STATUS_REG_AUX */
	uint8_t getSTATUS_REG_AUX()
	{
		return read8(STATUS_REG_AUX::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG OUT_ADC1_L                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUT_ADC1_L:
	 * 8.2
	 * Auxiliary 10-bit ADC channel 1 conversion. For auxiliary ADC setting refer
	 * to Section 3.7: Auxiliary ADC and temperature sensor.
	 */
	struct OUT_ADC1_L
	{
		static const uint16_t __address = 8;
		
		/* Bits OUT_ADC1_L: */
		struct OUT_ADC1_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_ADC1_L */
	void setOUT_ADC1_L(uint8_t value)
	{
		write(OUT_ADC1_L::__address, value, 8);
	}
	
	/* Get register OUT_ADC1_L */
	uint8_t getOUT_ADC1_L()
	{
		return read8(OUT_ADC1_L::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG OUT_ADC2_L                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUT_ADC2_L:
	 * 8.3
	 * Auxiliary 10-bit ADC channel 2 conversion. For auxiliary ADC setting refer
	 * to Section 3.7: Auxiliary ADC and temperature sensor.
	 */
	struct OUT_ADC2_L
	{
		static const uint16_t __address = 10;
		
		/* Bits OUT_ADC2_L: */
		struct OUT_ADC2_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_ADC2_L */
	void setOUT_ADC2_L(uint8_t value)
	{
		write(OUT_ADC2_L::__address, value, 8);
	}
	
	/* Get register OUT_ADC2_L */
	uint8_t getOUT_ADC2_L()
	{
		return read8(OUT_ADC2_L::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG OUT_ADC3_L                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG OUT_ADC3_L:
	 * 8.4
	 * Auxiliary 10-bit ADC channel 3 conversion or temperature sensor data output. Refer to
	 * Section 3.7: Auxiliary ADC and temperature sensor.
	 */
	struct OUT_ADC3_L
	{
		static const uint16_t __address = 12;
		
		/* Bits OUT_ADC3_L: */
		struct OUT_ADC3_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_ADC3_L */
	void setOUT_ADC3_L(uint8_t value)
	{
		write(OUT_ADC3_L::__address, value, 8);
	}
	
	/* Get register OUT_ADC3_L */
	uint8_t getOUT_ADC3_L()
	{
		return read8(OUT_ADC3_L::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG WHO_AM_I                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG WHO_AM_I:
	 * 8.5
	 * Device identification register.
	 */
	struct WHO_AM_I
	{
		static const uint16_t __address = 15;
		
		/* Bits WHO_AM_I: */
		struct WHO_AM_I_
		{
			/* MODE r */
			static const uint8_t dflt = 0b00110011; // 8'b110011
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register WHO_AM_I */
	void setWHO_AM_I(uint8_t value)
	{
		write(WHO_AM_I::__address, value, 8);
	}
	
	/* Get register WHO_AM_I */
	uint8_t getWHO_AM_I()
	{
		return read8(WHO_AM_I::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG0                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG0:
	 * 8.6
	 */
	struct CTRL_REG0
	{
		static const uint16_t __address = 30;
		
		/* Bits SDO_PU_DISC: */
		/* Disconnect SDO/SA0 pull-up.  */
		struct SDO_PU_DISC
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t PULL_UP_CONNECTED = 0b0; // pull-up connected to SDO/SA0 pin
			static const uint8_t PULL_UP_NOT_CONNECTED = 0b1; // pull-up disconnected to SDO/SA0 pin
		};
		/* Bits reserved_0: */
		/*
		 * Note: Leave bits 0 through 6 at the default value in order to ensure correct
		 * operation of the device.
		 */
		struct reserved_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0010000; // 7'b10000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register CTRL_REG0 */
	void setCTRL_REG0(uint8_t value)
	{
		write(CTRL_REG0::__address, value, 8);
	}
	
	/* Get register CTRL_REG0 */
	uint8_t getCTRL_REG0()
	{
		return read8(CTRL_REG0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG TEMP_CFG_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG TEMP_CFG_REG:
	 * 8.7
	 */
	struct TEMP_CFG_REG
	{
		static const uint16_t __address = 31;
		
		/* Bits ADC_EN: */
		/* ADC enable.  */
		struct ADC_EN
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // ADC disabled
			static const uint8_t ENABLED = 0b1; // ADC enabled
		};
		/* Bits TEMP_EN: */
		/* Temperature sensor (T) enable.  */
		struct TEMP_EN
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLED = 0b0; // T disabled
			static const uint8_t ENABLED = 0b1; // T enabled
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b000000; // 6'd0
			static const uint8_t mask = 0b00111111; // [0,1,2,3,4,5]
		};
	};
	
	/* Set register TEMP_CFG_REG */
	void setTEMP_CFG_REG(uint8_t value)
	{
		write(TEMP_CFG_REG::__address, value, 8);
	}
	
	/* Get register TEMP_CFG_REG */
	uint8_t getTEMP_CFG_REG()
	{
		return read8(TEMP_CFG_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CTRL_REG1:
	 */
	struct CTRL_REG1
	{
		static const uint16_t __address = 32;
		
		/* Bits ODR: */
		/* ODR[3:0] is used to set the power mode and ODR selection.  */
		struct ODR
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
			static const uint8_t POWER_DOWN = 0b000; // Power-down mode
			static const uint8_t HR_NORMAL_LP_1Hz = 0b001; // HR / Normal / Low-power mode (1 Hz)
			static const uint8_t HR_NORMAL_LP_10Hz = 0b010; // HR / Normal / Low-power mode (10 Hz)
			static const uint8_t HR_NORMAL_LP_25Hz = 0b011; // HR / Normal / Low-power mode (25 Hz)
			static const uint8_t HR_NORMAL_LP_50Hz = 0b100; // HR / Normal / Low-power mode (50 Hz)
			static const uint8_t HR_NORMAL_LP_100Hz = 0b101; // HR / Normal / Low-power mode (100 Hz)
			static const uint8_t HR_NORMAL_LP_200Hz = 0b110; // HR / Normal / Low-power mode (200 Hz)
			static const uint8_t HR_NORMAL_LP_400Hz = 0b111; // HR / Normal / Low-power mode (400 Hz)
			static const uint8_t HR_NORMAL_LP_1600Hz = 0b1000; // Low power mode (1.60 kHz)
			static const uint8_t HR_NORMAL_1344Hz_LP_5367Hz = 0b1001; // HR / normal (1.344 kHz); Low-power mode (5.376 kHz). HR / normal (1.344 kHz); Low-power mode (5.376 kHz)
		};
		/* Bits LPen: */
		/* Low-power mode enable.  */
		struct LPen
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t HIGH_RES_OR_NORMAL = 0b0; // high-resolution mode / normal mode
			static const uint8_t LOW_POWER = 0b1; // low-power mode
		};
		/* Bits Zen: */
		/* Z-axis enable.  */
		struct Zen
		{
			/* MODE rw */
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t DISABLED = 0b0; // Z-axis disabled
			static const uint8_t ENABLED = 0b1; // Z-axis enabled
		};
		/* Bits Yen: */
		/* Y-axis enable.  */
		struct Yen
		{
			/* MODE rw */
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // Y-axis disabled
			static const uint8_t ENABLED = 0b1; // Y-axis enabled
		};
		/* Bits Xen: */
		/* X-axis enable.  */
		struct Xen
		{
			/* MODE rw */
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // X-axis disabled
			static const uint8_t ENABLED = 0b1; // X-axis enabled
		};
	};
	
	/* Set register CTRL_REG1 */
	void setCTRL_REG1(uint8_t value)
	{
		write(CTRL_REG1::__address, value, 8);
	}
	
	/* Get register CTRL_REG1 */
	uint8_t getCTRL_REG1()
	{
		return read8(CTRL_REG1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG2:
	 * 8.9
	 */
	struct CTRL_REG2
	{
		static const uint16_t __address = 33;
		
		/* Bits HPM: */
		/* High-pass filter mode selection.  */
		struct HPM
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
			static const uint8_t NORMAL = 0b00; // Normal mode (reset by reading REFERENCE (26h))
			static const uint8_t REFERENCE_SIGNAL = 0b01; // Reference signal for filtering
			static const uint8_t NORMAL2 = 0b10; // Normal mode
			static const uint8_t AUTO_RESET_ON_INTERRUPT = 0b11; // Autoreset on interrupt event
		};
		/* Bits HPCF: */
		/* High-pass filter cutoff frequency selection  */
		struct HPCF
		{
			/* MODE rw */
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits FDS: */
		/* Filtered data selection.  */
		struct FDS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t BYPASSED = 0b0; // internal filter bypassed
			static const uint8_t SENT_TO_OUTPUT = 0b1; // data from internal filter sent to output register and FIFO
		};
		/* Bits HPCLICK: */
		/* High-pass filter enabled for CLICK function.  */
		struct HPCLICK
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t BYPASSED = 0b0; // filter bypassed
			static const uint8_t ENABLED = 0b1; // filter enabled
		};
		/* Bits HP_IA2: */
		/* High-pass filter enabled for AOI function on interrupt 2,  */
		struct HP_IA2
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t BYPASSED = 0b0; // filter bypassed
			static const uint8_t ENABLED = 0b1; // filter enabled
		};
		/* Bits HP_IA1: */
		/* High-pass filter enabled for AOI function on interrupt 1,  */
		struct HP_IA1
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t BYPASSED = 0b0; // filter bypassed
			static const uint8_t ENABLED = 0b1; // filter enabled
		};
	};
	
	/* Set register CTRL_REG2 */
	void setCTRL_REG2(uint8_t value)
	{
		write(CTRL_REG2::__address, value, 8);
	}
	
	/* Get register CTRL_REG2 */
	uint8_t getCTRL_REG2()
	{
		return read8(CTRL_REG2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG3                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG3:
	 * 8.10
	 */
	struct CTRL_REG3
	{
		static const uint16_t __address = 34;
		
		/* Bits I1_CLICK: */
		/* Click interrupt on INT1.  */
		struct I1_CLICK
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_IA1: */
		/* IA1 interrupt on INT1.  */
		struct I1_IA1
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_IA2: */
		/* IA2 interrupt on INT1.  */
		struct I1_IA2
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_ZYXDA: */
		/* ZYXDA interrupt on INT1.  */
		struct I1_ZYXDA
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_321DA: */
		/* 321DA interrupt on INT1.  */
		struct I1_321DA
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_WTM: */
		/* FIFO watermark interrupt on INT1.  */
		struct I1_WTM
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits I1_OVERRUN: */
		/* FIFO overrun interrupt on INT1.  */
		struct I1_OVERRUN
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // disable
			static const uint8_t ENABLED = 0b1; // enable
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register CTRL_REG3 */
	void setCTRL_REG3(uint8_t value)
	{
		write(CTRL_REG3::__address, value, 8);
	}
	
	/* Get register CTRL_REG3 */
	uint8_t getCTRL_REG3()
	{
		return read8(CTRL_REG3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG4                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG4:
	 * 8.11
	 */
	struct CTRL_REG4
	{
		static const uint16_t __address = 35;
		
		/* Bits BDU: */
		/* Block data update.  */
		struct BDU
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t CONTINUOUS = 0b0; // continuous update
			static const uint8_t NOT_UPDATED_UNTIL_READ = 0b1; // output registers not updated until MSB and LSB reading
		};
		/* Bits BLE: */
		/*
		 * Big/little endian data selection.
		 * The BLE function can be activated only in high-resolution mode.
		 */
		struct BLE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t LSB = 0b0; // Data LSB @ lower address
			static const uint8_t MSB = 0b1; // Data MSB @ lower address
		};
		/* Bits FS: */
		/* Full-scale selection.  */
		struct FS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00110000; // [4,5]
			static const uint8_t FS2g = 0b00; // ±2 g
			static const uint8_t FS4g = 0b01; // ±4 g
			static const uint8_t FS8g = 0b10; // ±8 g
			static const uint8_t FS16g = 0b11; // ±16 g
		};
		/* Bits HR: */
		/* High-resolution output mode:  */
		struct HR
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // high-resolution disabled
			static const uint8_t ENABLED = 0b1; // high-resolution enabled
		};
		/* Bits ST: */
		/* Self-test enable.  */
		struct ST
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000110; // [1,2]
			static const uint8_t NORMAL = 0b00; // Normal mode
			static const uint8_t SELF_TEST_0 = 0b01; // Self-test 0
			static const uint8_t SELF_TEST_1 = 0b10; // Self-test 1
			static const uint8_t unused_0 = 0b11; // 
		};
		/* Bits SIM: */
		/* SPI serial interface mode selection.  */
		struct SIM
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t SPI_4_WIRE = 0b0; // 4-wire interface
			static const uint8_t SPI_3_WIRE = 0b1; // 3-wire interface
		};
	};
	
	/* Set register CTRL_REG4 */
	void setCTRL_REG4(uint8_t value)
	{
		write(CTRL_REG4::__address, value, 8);
	}
	
	/* Get register CTRL_REG4 */
	uint8_t getCTRL_REG4()
	{
		return read8(CTRL_REG4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG5                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG5:
	 * 8.12
	 */
	struct CTRL_REG5
	{
		static const uint16_t __address = 35;
		
		/* Bits BOOT: */
		/* Reboot memory content.  */
		struct BOOT
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NORMAL = 0b0; // normal mode
			static const uint8_t REBOOT_MEMORY_CONTENT = 0b1; // reboot memory content
		};
		/* Bits FIFO_EN: */
		/* FIFO enable.  */
		struct FIFO_EN
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLE = 0b0; // FIFO disable
			static const uint8_t ENABLE = 0b1; // FIFO enable
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits LIR_INT1: */
		/*
		 * Latch interrupt request on INT1_SRC register, with INT1_SRC (31h) register cleared
		 * by reading INT1_SRC (31h) itself.
		 */
		struct LIR_INT1
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NOT_LATCHED = 0b0; // interrupt request not latched
			static const uint8_t LATCHED = 0b1; // interrupt request latched
		};
		/* Bits D4D_INT1: */
		/* 4D enable: 4D detection is enabled on INT1 when 6D bit on INT1_CFG is set to 1.  */
		struct D4D_INT1
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits LIR_INT2: */
		/*
		 * Latch interrupt request on INT2_SRC (35h) register, with INT2_SRC (35h)
		 * register cleared by reading INT2_SRC (35h) itself.
		 */
		struct LIR_INT2
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NOT_LATCHED = 0b0; // interrupt request not latched
			static const uint8_t LATCHED = 0b1; // interrupt request latched
		};
		/* Bits D4D_INT2: */
		/*
		 * 4D enable: 4D detection is enabled on INT2 pin when 6D bit on INT2_CFG
		 * (34h) is set to 1.
		 */
		struct D4D_INT2
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register CTRL_REG5 */
	void setCTRL_REG5(uint8_t value)
	{
		write(CTRL_REG5::__address, value, 8);
	}
	
	/* Get register CTRL_REG5 */
	uint8_t getCTRL_REG5()
	{
		return read8(CTRL_REG5::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG6                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG6:
	 * 8.13
	 */
	struct CTRL_REG6
	{
		static const uint16_t __address = 37;
		
		/* Bits I2_CLICK: */
		/* Click interrupt on INT2 pin.  */
		struct I2_CLICK
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // disabled
			static const uint8_t ENABLED = 0b1; // enabled
		};
		/* Bits I2_IA1: */
		/* Enable interrupt 1 function on INT2 pin.  */
		struct I2_IA1
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLED = 0b0; // function disabled
			static const uint8_t ENABLED = 0b1; // function enabled
		};
		/* Bits I2_IA2: */
		/* Enable interrupt 2 function on INT2 pin.  */
		struct I2_IA2
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // function disabled
			static const uint8_t ENABLED = 0b1; // function enabled
		};
		/* Bits I2_BOOT: */
		/* Enable boot on INT2 pin.  */
		struct I2_BOOT
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
		/* Bits I2_ACT: */
		/* Enable activity interrupt on INT2 pin.  */
		struct I2_ACT
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // disabled
			static const uint8_t ENABLED = 0b1; // enabled
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits INT_POLARITY: */
		/* INT1 and INT2 pin polarity.  */
		struct INT_POLARITY
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t ACTIVE_HIGH = 0b0; // active-high
			static const uint8_t ACTIVE_LOW = 0b1; // active-low
		};
		/* Bits unused_1: */
		struct unused_1
		{
			/* MODE rw */
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register CTRL_REG6 */
	void setCTRL_REG6(uint8_t value)
	{
		write(CTRL_REG6::__address, value, 8);
	}
	
	/* Get register CTRL_REG6 */
	uint8_t getCTRL_REG6()
	{
		return read8(CTRL_REG6::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG REFERENCE                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG REFERENCE:
	 * Reference value for Interrupt generation.
	 */
	struct REFERENCE
	{
		static const uint16_t __address = 38;
		
		/* Bits REFERENCE: */
		struct REFERENCE_
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00000000; // 8'd0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register REFERENCE */
	void setREFERENCE(uint8_t value)
	{
		write(REFERENCE::__address, value, 8);
	}
	
	/* Get register REFERENCE */
	uint8_t getREFERENCE()
	{
		return read8(REFERENCE::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG STATUS_REG                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG STATUS_REG:
	 * 8.15
	 */
	struct STATUS_REG
	{
		static const uint16_t __address = 39;
		
		/* Bits ZYXOR: */
		/* X, Y and Z-axis data overrun.  */
		struct ZYXOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // a new set of data has overwritten the previous set
		};
		/* Bits ZOR: */
		/* Z-axis data overrun.  */
		struct ZOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // a new data for the Z-axis has overwritten the previous data
		};
		/* Bits YOR: */
		/* Y-axis data overrun.  */
		struct YOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // new data for the Y-axis has overwritten the previous data
		};
		/* Bits XOR: */
		/* X-axis data overrun.  */
		struct XOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERRUN = 0b1; // new data for the X-axis has overwritten the previous data
		};
		/* Bits ZYXDA: */
		/* X, Y and Z-axis new data available.  */
		struct ZYXDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NO_DATA = 0b0; // a new set of data is not yet available
			static const uint8_t DATA = 0b1; // a new set of data is available
		};
		/* Bits ZDA: */
		/* Z-axis new data available.  */
		struct ZDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t NO_DATA = 0b0; // new data for the Z-axis is not yet available
			static const uint8_t DATA = 0b1; // new data for the Z-axis is available
		};
		/* Bits YDA: */
		/* Y-axis new data available.  */
		struct YDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NO_DATA = 0b0; // new data for the Y-axis is not yet available
			static const uint8_t DATA = 0b1; // new data for the Y-axis is available
		};
		/* Bits XDA: */
		/* X-axis new data available.  */
		struct XDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_DATA = 0b0; // new data for the X-axis is not yet available
			static const uint8_t DATA = 0b1; // new data for the X-axis is available
		};
	};
	
	/* Set register STATUS_REG */
	void setSTATUS_REG(uint8_t value)
	{
		write(STATUS_REG::__address, value, 8);
	}
	
	/* Get register STATUS_REG */
	uint8_t getSTATUS_REG()
	{
		return read8(STATUS_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG OUT_X_L                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OUT_X_L:
	 * 8.16
	 * X-axis acceleration data. The value is expressed as two’s complement left-justified.
	 * Please refer to Section 3.2.1: High-resolution, normal mode, low-power mode.
	 */
	struct OUT_X_L
	{
		static const uint16_t __address = 40;
		
		/* Bits OUT_X_L: */
		struct OUT_X_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_X_L */
	void setOUT_X_L(uint8_t value)
	{
		write(OUT_X_L::__address, value, 8);
	}
	
	/* Get register OUT_X_L */
	uint8_t getOUT_X_L()
	{
		return read8(OUT_X_L::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG OUT_Y_L                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OUT_Y_L:
	 * 8.17
	 * Y-axis acceleration data. The value is expressed as two’s complement left-justified.
	 * Please refer to Section 3.2.1: High-resolution, normal mode, low-power mode.
	 */
	struct OUT_Y_L
	{
		static const uint16_t __address = 42;
		
		/* Bits OUT_Y_L: */
		struct OUT_Y_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_Y_L */
	void setOUT_Y_L(uint8_t value)
	{
		write(OUT_Y_L::__address, value, 8);
	}
	
	/* Get register OUT_Y_L */
	uint8_t getOUT_Y_L()
	{
		return read8(OUT_Y_L::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG OUT_Z_L                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OUT_Z_L:
	 * 8.18
	 * Z-axis acceleration data. The value is expressed as two’s complement left-justified.
	 * Please refer to Section 3.2.1: High-resolution, normal mode, low-power mode.
	 */
	struct OUT_Z_L
	{
		static const uint16_t __address = 44;
		
		/* Bits OUT_Z_L: */
		struct OUT_Z_L_
		{
			/* MODE r */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OUT_Z_L */
	void setOUT_Z_L(uint8_t value)
	{
		write(OUT_Z_L::__address, value, 8);
	}
	
	/* Get register OUT_Z_L */
	uint8_t getOUT_Z_L()
	{
		return read8(OUT_Z_L::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG FIFO_CTRL_REG                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG FIFO_CTRL_REG:
	 * 8.19
	 */
	struct FIFO_CTRL_REG
	{
		static const uint16_t __address = 46;
		
		/* Bits FM: */
		/* FIFO mode selection.  */
		struct FM
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
			static const uint8_t BYPASS = 0b00; // Bypass mode
			static const uint8_t FIFO = 0b01; // FIFO mode
			static const uint8_t STREAM = 0b10; // Stream mode
			static const uint8_t STREAM_TO_FIFO = 0b11; // Stream-to-FIFO
		};
		/* Bits TR: */
		/* Trigger selection.  */
		struct TR
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t TRIGGER_ON_INT1 = 0b0; // trigger event allows triggering signal on INT1
			static const uint8_t TRIGGER_ON_INT2 = 0b1; // trigger event allows triggering signal on INT2
		};
		/* Bits FTH: */
		struct FTH
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register FIFO_CTRL_REG */
	void setFIFO_CTRL_REG(uint8_t value)
	{
		write(FIFO_CTRL_REG::__address, value, 8);
	}
	
	/* Get register FIFO_CTRL_REG */
	uint8_t getFIFO_CTRL_REG()
	{
		return read8(FIFO_CTRL_REG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG FIFO_SRC_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_SRC_REG:
	 */
	struct FIFO_SRC_REG
	{
		static const uint16_t __address = 47;
		
		/* Bits WTM: */
		/* WTM bit is set high when FIFO content exceeds watermark level  */
		struct WTM
		{
			/* MODE r */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits OVRN_FIFO: */
		/*
		 * OVRN bit is set high when FIFO buffer is full; this means that the FIFO buffer contains
		 * 32 unread samples. At the following ODR a new sample set replaces the oldest FIFO value.
		 * The OVRN bit is set to 0 when the first sample set has been read.
		 */
		struct OVRN_FIFO
		{
			/* MODE r */
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits EMPTY: */
		/* EMPTY flag is set high when all FIFO samples have been read and FIFO is empty  */
		struct EMPTY
		{
			/* MODE r */
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits FSS: */
		/*
		 * The FSS field always contains the current number of unread samples stored in
		 * the FIFO buffer. When FIFO is enabled, this value increases at ODR frequency
		 * until the buffer is full, whereas, it decreases every time one sample set is retrieved from FIFO.
		 */
		struct FSS
		{
			/* MODE r */
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register FIFO_SRC_REG */
	void setFIFO_SRC_REG(uint8_t value)
	{
		write(FIFO_SRC_REG::__address, value, 8);
	}
	
	/* Get register FIFO_SRC_REG */
	uint8_t getFIFO_SRC_REG()
	{
		return read8(FIFO_SRC_REG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT1_CFG                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT1_CFG:
	 * 8.21
	 * Content of this register is loaded at boot.
	 * Write operation at this address is possible only after system boot.
	 * Table 55: Interrupt mode:
	 * AOI    6D        Interrupt mode
	 * 0       0        OR combination of interrupt events
	 * 0       1        6-direction movement recognition
	 * 1       0        AND combination of interrupt events
	 * 1       1        6-direction position recognition
	 * Difference between AOI-6D = ‘01’ and AOI-6D = ‘11’.
	 * AOI-6D = ‘01’ is movement recognition. An interrupt is generated when the orientation moves from an
	 * unknown zone to known zone. The interrupt signal remains for a duration ODR.
	 * AOI-6D = ‘11’ is direction recognition. An interrupt is generated when the orientation is inside a
	 * known zone. The interrupt signal remains until the orientation is inside the zone.
	 * 
	 */
	struct INT1_CFG
	{
		static const uint16_t __address = 48;
		
		/* Bits AOI: */
		/*
		 * And/Or combination of Interrupt events.
		 * Refer to Table 55: Interrupt mode
		 */
		struct AOI
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits DIR_6D: */
		/*
		 * 6 direction detection function enabled.
		 * Refer to Table 55: Interrupt mode
		 */
		struct DIR_6D
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits ZHIE: */
		/* Enable interrupt generation on Z high event or on Direction recognition.  */
		struct ZHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request
		};
		/* Bits ZLIE: */
		/* Enable interrupt generation on Z low event or on Direction recognition.  */
		struct ZLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLE = 0b0; // disable interrupt request
			static const uint8_t ENABLE = 0b1; // enable interrupt request
		};
		/* Bits YHIE: */
		/* Enable interrupt generation on Y high event or on Direction recognition.  */
		struct YHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request.
		};
		/* Bits YLIE: */
		/* Enable interrupt generation on Y low event or on Direction recognition.  */
		struct YLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t DISABLE = 0b0; // disable interrupt request
			static const uint8_t ENABLE = 0b1; // enable interrupt request.
		};
		/* Bits XHIE: */
		/* Enable interrupt generation on X high event or on Direction recognition.  */
		struct XHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request.
		};
		/* Bits XLIE: */
		/* Enable interrupt generation on X low event or on Direction recognition.  */
		struct XLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLE = 0b0; // disable interrupt request; 1: enable interrupt request.
		};
	};
	
	/* Set register INT1_CFG */
	void setINT1_CFG(uint8_t value)
	{
		write(INT1_CFG::__address, value, 8);
	}
	
	/* Get register INT1_CFG */
	uint8_t getINT1_CFG()
	{
		return read8(INT1_CFG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT1_SRC                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT1_SRC:
	 * 8.22
	 * Interrupt 1 source register. Read-only register.
	 * Reading at this address clears the INT1_SRC (31h) IA bit (and the interrupt signal on the INT 1 pin)
	 * and allows the refresh of data in INT1_SRC (31h) if the latched option was chosen.
	 */
	struct INT1_SRC
	{
		static const uint16_t __address = 49;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE r */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits IA: */
		/* Interrupt active.  */
		struct IA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t INTERRUPT = 0b0; // no interrupt has been generated
			static const uint8_t NO_INTERRUPT = 0b1; // one or more interrupts have been generated
		};
		/* Bits ZH: */
		/* Z high.  */
		struct ZH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Z high event has occurred
		};
		/* Bits ZL: */
		/* Z low.  */
		struct ZL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Z low event has occurred
		};
		/* Bits YH: */
		/* Y high.  */
		struct YH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Y high event has occurred
		};
		/* Bits YL: */
		/* Y low.  */
		struct YL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Y low event has occurred
		};
		/* Bits XH: */
		/* X high.  */
		struct XH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // X high event has occurred
		};
		/* Bits XL: */
		/* X low.  */
		struct XL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt
			static const uint8_t INTERRUPT = 0b1; // X low event has occurred
		};
	};
	
	/* Set register INT1_SRC */
	void setINT1_SRC(uint8_t value)
	{
		write(INT1_SRC::__address, value, 8);
	}
	
	/* Get register INT1_SRC */
	uint8_t getINT1_SRC()
	{
		return read8(INT1_SRC::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT1_THS                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT1_THS:
	 * Interrupt 1 threshold.
	 */
	struct INT1_THS
	{
		static const uint16_t __address = 50;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits THS: */
		/*
		 * 1 LSb = 16 mg @ FS = ±2 g
		 * 1 LSb = 32 mg @ FS = ±4 g
		 * 1 LSb = 62 mg @ FS = ±8 g
		 * 1 LSb = 186 mg @ FS = ±16 g
		 */
		struct THS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register INT1_THS */
	void setINT1_THS(uint8_t value)
	{
		write(INT1_THS::__address, value, 8);
	}
	
	/* Get register INT1_THS */
	uint8_t getINT1_THS()
	{
		return read8(INT1_THS::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG INT1_DURATION                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG INT1_DURATION:
	 * 8.24
	 * The D[6:0] bits set the minimum duration of the Interrupt 2 event to be recognized. Duration
	 * steps and maximum values depend on the ODR chosen.
	 * Duration time is measured in N/ODR, where N is the content of the duration register.
	 */
	struct INT1_DURATION
	{
		static const uint16_t __address = 51;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits D: */
		/*
		 * Duration value.
		 * 1 LSb = 1/ODR
		 */
		struct D
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register INT1_DURATION */
	void setINT1_DURATION(uint8_t value)
	{
		write(INT1_DURATION::__address, value, 8);
	}
	
	/* Get register INT1_DURATION */
	uint8_t getINT1_DURATION()
	{
		return read8(INT1_DURATION::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT2_CFG                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT2_CFG:
	 * 8.25
	 * Content of this register is loaded at boot.
	 * Write operation at this address is possible only after system boot.
	 * Table 64: Interrupt mode:
	 * AOI           6D        Interrupt mode
	 * 0              0        OR combination of interrupt events
	 * 0              1        6-direction movement recognition
	 * 1              0        AND combination of interrupt events
	 * 1              1        6-direction position recognition
	 * Difference between AOI-6D = ‘01’ and AOI-6D = ‘11’.
	 * AOI-6D = ‘01’ is movement recognition. An interrupt is generated when the orientation moves from an
	 * unknown zone to known zone. The interrupt signal remains for a duration ODR.
	 * AOI-6D = ‘11’ is direction recognition. An interrupt is generated when the orientation is inside a
	 * known zone. The interrupt signal remains until the orientation is inside the zone.
	 * 
	 */
	struct INT2_CFG
	{
		static const uint16_t __address = 52;
		
		/* Bits AOI: */
		/*
		 * And/Or combination of Interrupt events.
		 * Refer to Table 64: Interrupt mode
		 */
		struct AOI
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits DIR_6D: */
		/*
		 * 6 direction detection function enabled.
		 * Refer to Table 64: Interrupt mode
		 */
		struct DIR_6D
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits ZHIE: */
		/* Enable interrupt generation on Z high event or on Direction recognition.  */
		struct ZHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request
		};
		/* Bits ZLIE: */
		/* Enable interrupt generation on Z low event or on Direction recognition.  */
		struct ZLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLE = 0b0; // disable interrupt request
			static const uint8_t ENABLE = 0b1; // enable interrupt request
		};
		/* Bits YHIE: */
		/* Enable interrupt generation on Y high event or on Direction recognition.  */
		struct YHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request.
		};
		/* Bits YLIE: */
		/* Enable interrupt generation on Y low event or on Direction recognition.  */
		struct YLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t DISABLE = 0b0; // disable interrupt request
			static const uint8_t ENABLE = 0b1; // enable interrupt request.
		};
		/* Bits XHIE: */
		/* Enable interrupt generation on X high event or on Direction recognition.  */
		struct XHIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request.
		};
		/* Bits XLIE: */
		/* Enable interrupt generation on X low event or on Direction recognition.  */
		struct XLIE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLE = 0b0; // disable interrupt request; 1: enable interrupt request.
		};
	};
	
	/* Set register INT2_CFG */
	void setINT2_CFG(uint8_t value)
	{
		write(INT2_CFG::__address, value, 8);
	}
	
	/* Get register INT2_CFG */
	uint8_t getINT2_CFG()
	{
		return read8(INT2_CFG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT2_SRC                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT2_SRC:
	 * 8.26
	 * Interrupt 2 source register. Read-only register.
	 * Reading at this address clears the INT1_SRC (31h) IA bit (and the interrupt signal on the INT 1 pin)
	 * and allows the refresh of data in INT1_SRC (31h) if the latched option was chosen.
	 */
	struct INT2_SRC
	{
		static const uint16_t __address = 53;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE r */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits IA: */
		/* Interrupt active.  */
		struct IA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t INTERRUPT = 0b0; // no interrupt has been generated
			static const uint8_t NO_INTERRUPT = 0b1; // one or more interrupts have been generated
		};
		/* Bits ZH: */
		/* Z high.  */
		struct ZH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Z high event has occurred
		};
		/* Bits ZL: */
		/* Z low.  */
		struct ZL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Z low event has occurred
		};
		/* Bits YH: */
		/* Y high.  */
		struct YH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Y high event has occurred
		};
		/* Bits YL: */
		/* Y low.  */
		struct YL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // Y low event has occurred
		};
		/* Bits XH: */
		/* X high.  */
		struct XH
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t INTERRUPT = 0b0; // no interrupt
			static const uint8_t NO_INTERRUPT = 0b1; // X high event has occurred
		};
		/* Bits XL: */
		/* X low.  */
		struct XL
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt
			static const uint8_t INTERRUPT = 0b1; // X low event has occurred
		};
	};
	
	/* Set register INT2_SRC */
	void setINT2_SRC(uint8_t value)
	{
		write(INT2_SRC::__address, value, 8);
	}
	
	/* Get register INT2_SRC */
	uint8_t getINT2_SRC()
	{
		return read8(INT2_SRC::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG INT2_THS                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG INT2_THS:
	 * 8.27
	 * Interrupt 2 threshold.
	 */
	struct INT2_THS
	{
		static const uint16_t __address = 54;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits THS: */
		/*
		 * 1 LSb = 16 mg @ FS = ±2 g
		 * 1 LSb = 32 mg @ FS = ±4 g
		 * 1 LSb = 62 mg @ FS = ±8 g
		 * 1 LSb = 186 mg @ FS = ±16 g
		 */
		struct THS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register INT2_THS */
	void setINT2_THS(uint8_t value)
	{
		write(INT2_THS::__address, value, 8);
	}
	
	/* Get register INT2_THS */
	uint8_t getINT2_THS()
	{
		return read8(INT2_THS::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG INT2_DURATION                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG INT2_DURATION:
	 * 8.28
	 * The D[6:0] bits set the minimum duration of the Interrupt 2 event to be recognized. Duration
	 * steps and maximum values depend on the ODR chosen.
	 * Duration time is measured in N/ODR, where N is the content of the duration register.
	 */
	struct INT2_DURATION
	{
		static const uint16_t __address = 55;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits D: */
		/*
		 * Duration value.
		 * 1 LSb = 1/ODR
		 */
		struct D
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register INT2_DURATION */
	void setINT2_DURATION(uint8_t value)
	{
		write(INT2_DURATION::__address, value, 8);
	}
	
	/* Get register INT2_DURATION */
	uint8_t getINT2_DURATION()
	{
		return read8(INT2_DURATION::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CLICK_CFG                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CLICK_CFG:
	 * 8.29
	 */
	struct CLICK_CFG
	{
		static const uint16_t __address = 56;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits ZD: */
		/* Enable interrupt double click on Z-axis.  */
		struct ZD
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
		/* Bits ZS: */
		/* Enable interrupt single click on Z-axis.  */
		struct ZS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
		/* Bits YD: */
		/* Enable interrupt double click on Y-axis.  */
		struct YD
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
		/* Bits YS: */
		/* Enable interrupt single click on Y-axis.  */
		struct YS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
		/* Bits XD: */
		/* Enable interrupt double click on X-axis.  */
		struct XD
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
		/* Bits XS: */
		/* Enable interrupt single click on X-axis.  */
		struct XS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // disable interrupt request
			static const uint8_t ENABLED = 0b1; // enable interrupt request on measured accel. value higher than preset threshold
		};
	};
	
	/* Set register CLICK_CFG */
	void setCLICK_CFG(uint8_t value)
	{
		write(CLICK_CFG::__address, value, 8);
	}
	
	/* Get register CLICK_CFG */
	uint8_t getCLICK_CFG()
	{
		return read8(CLICK_CFG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CLICK_SRC                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CLICK_SRC:
	 * 8.30
	 */
	struct CLICK_SRC
	{
		static const uint16_t __address = 57;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits IA: */
		/* Interrupt active.  */
		struct IA
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt has been generated
			static const uint8_t INTERRUPT = 0b1; // one or more interrupts have been generated
		};
		/* Bits DCLICK: */
		/* Double-click enable.  */
		struct DCLICK
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLED = 0b0; // double-click detection disabled
			static const uint8_t ENABLED = 0b1; // double-click detection enabled
		};
		/* Bits SCLICK: */
		/* Single-click enable.  */
		struct SCLICK
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLED = 0b0; // Single-click detection disabled
			static const uint8_t ENABLED = 0b1; // single-click detection enabled
		};
		/* Bits Sign: */
		/* Click sign.  */
		struct Sign
		{
			/* MODE rw */
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t POSITIVE_DETECTION = 0b0; // 
			static const uint8_t NEGATIVE_DETECTION = 0b1; // 
		};
		/* Bits Z: */
		/* Z click detection.  */
		struct Z
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt
			static const uint8_t INTERRUPT = 0b1; // Z high event has occurred
		};
		/* Bits Y: */
		/* Y click detection.  */
		struct Y
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt
			static const uint8_t INTERRUPT = 0b1; // Y high event has occurred
		};
		/* Bits X: */
		/* X click detection.  */
		struct X
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t NO_INTERRUPT = 0b0; // no interrupt
			static const uint8_t INTERRUPT = 0b1; // X high event has occurred
		};
	};
	
	/* Set register CLICK_SRC */
	void setCLICK_SRC(uint8_t value)
	{
		write(CLICK_SRC::__address, value, 8);
	}
	
	/* Get register CLICK_SRC */
	uint8_t getCLICK_SRC()
	{
		return read8(CLICK_SRC::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CLICK_THS                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CLICK_THS:
	 * 8.31
	 */
	struct CLICK_THS
	{
		static const uint16_t __address = 58;
		
		/* Bits LIR_Click: */
		/*
		 * If the LIR_Click bit is not set, the interrupt is kept high for the duration of the latency window.
		 * If the LIR_Click bit is set, the interrupt is kept high until the CLICK_SRC (39h) register is read.
		 */
		struct LIR_Click
		{
			/* MODE rw */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits Ths: */
		/* Click threshold.  */
		struct Ths
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register CLICK_THS */
	void setCLICK_THS(uint8_t value)
	{
		write(CLICK_THS::__address, value, 8);
	}
	
	/* Get register CLICK_THS */
	uint8_t getCLICK_THS()
	{
		return read8(CLICK_THS::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG TIME_LIMIT                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG TIME_LIMIT:
	 * 8.32
	 */
	struct TIME_LIMIT
	{
		static const uint16_t __address = 59;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits TLI: */
		/* Click time limit.  */
		struct TLI
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register TIME_LIMIT */
	void setTIME_LIMIT(uint8_t value)
	{
		write(TIME_LIMIT::__address, value, 8);
	}
	
	/* Get register TIME_LIMIT */
	uint8_t getTIME_LIMIT()
	{
		return read8(TIME_LIMIT::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG TIME_LATENCY                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG TIME_LATENCY:
	 * 8.33
	 * Click time latency.
	 */
	struct TIME_LATENCY
	{
		static const uint16_t __address = 60;
		
		/* Bits TIME_LATENCY: */
		struct TIME_LATENCY_
		{
			/* MODE rw */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIME_LATENCY */
	void setTIME_LATENCY(uint8_t value)
	{
		write(TIME_LATENCY::__address, value, 8);
	}
	
	/* Get register TIME_LATENCY */
	uint8_t getTIME_LATENCY()
	{
		return read8(TIME_LATENCY::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG TIME_WINDOW                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG TIME_WINDOW:
	 * 8.34
	 * Click time window
	 */
	struct TIME_WINDOW
	{
		static const uint16_t __address = 61;
		
		/* Bits TIME_WINDOW: */
		struct TIME_WINDOW_
		{
			/* MODE rw */
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIME_WINDOW */
	void setTIME_WINDOW(uint8_t value)
	{
		write(TIME_WINDOW::__address, value, 8);
	}
	
	/* Get register TIME_WINDOW */
	uint8_t getTIME_WINDOW()
	{
		return read8(TIME_WINDOW::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG ACT_THS                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG ACT_THS:
	 * 8.35
	 */
	struct ACT_THS
	{
		static const uint16_t __address = 62;
		
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits Acth: */
		/*
		 * Sleep-to-wake, return-to-sleep activation threshold in low-power mode
		 * 1 LSb = 16 mg @ FS = ±2 g
		 * 1 LSb = 32 mg @ FS = ±4 g
		 * 1 LSb = 62 mg @ FS = ±8 g
		 * 1 LSb = 186 mg @ FS = ±16 g
		 */
		struct Acth
		{
			/* MODE rw */
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register ACT_THS */
	void setACT_THS(uint8_t value)
	{
		write(ACT_THS::__address, value, 8);
	}
	
	/* Get register ACT_THS */
	uint8_t getACT_THS()
	{
		return read8(ACT_THS::__address, 8);
	}
	
};
