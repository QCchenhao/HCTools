//
//  TModel+CoreDataProperties.swift
//  xstemp
//
//  Created by erdong on 2019/10/29.
//  Copyright © 2019 陈浩. All rights reserved.
//
//

import Foundation
import CoreData


extension TModel {

    @nonobjc public class func fetchRequest() -> NSFetchRequest<TModel> {
        return NSFetchRequest<TModel>(entityName: "TModel")
    }

    @NSManaged public var tName: String?
    @NSManaged public var tTitle: String?

}
